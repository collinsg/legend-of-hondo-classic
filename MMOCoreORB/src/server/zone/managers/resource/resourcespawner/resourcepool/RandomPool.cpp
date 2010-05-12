/*
Copyright (C) 2010 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 3 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

#include "RandomPool.h"
#include "../ResourceSpawner.h"

RandomPool::RandomPool(ResourceSpawner* spawner) : ResourcePool(spawner) {

}

RandomPool::~RandomPool() {

}

void RandomPool::initialize(const String& includes, const String& excludes, int size) {
	ResourcePool::initialize(includes, excludes);
	poolSize = size;
	for(int ii = 0; ii < poolSize; ++ii)
		this->add(NULL);
}

void RandomPool::addResource(ManagedReference<ResourceSpawn*> resourceSpawn) {
	for (int ii = 0; ii < this->size(); ++ii) {

		ManagedReference<ResourceSpawn* > spawninpool = this->get(ii);

		if(spawninpool == NULL) {
			this->setElementAt(ii, resourceSpawn);
			break;
		}
	}
}

bool RandomPool::update() {
	/**
	 * Create resources for any included type that doesn't exist in
	 * the VectorMap
	 */
	for(int ii = 0; ii < size(); ++ii) {

		ManagedReference<ResourceSpawn* > resourceSpawn = get(ii);

		if(resourceSpawn == NULL) {
			ManagedReference<ResourceSpawn* > newSpawn =
					resourceSpawner->createResourceSpawn(includedResources, excludedResources);
			newSpawn->setSpawnPool(ResourcePool::RANDOMPOOL);
			newSpawn->updateToDatabase();

			setElementAt(ii, newSpawn);

		}
	}

	/**
	 * We remove any resources that have despawned from the
	 * pool
	 */
	for(int ii = 0; ii < size(); ++ii) {
		ManagedReference<ResourceSpawn* > spawn = get(ii);
		if(!spawn->inShift()) {
System::out << spawn->getName() << " of type " << spawn->getFinalClass()
		<< " is shifting from the RandomPool" << endl;
			setElementAt(ii, NULL);
			spawn->setSpawnPool(ResourcePool::NOPOOL);
			spawn->updateToDatabase();

			ManagedReference<ResourceSpawn* > newSpawn = NULL;// =
					//resourceSpawner->getFromRandomPool(type);

			if(newSpawn == NULL)
				newSpawn = resourceSpawner->createResourceSpawn(includedResources, excludedResources);

			newSpawn->setSpawnPool(ResourcePool::RANDOMPOOL);
			newSpawn->updateToDatabase();

			setElementAt(ii, newSpawn);
		}
	}

	resourceSpawner->log("Random Pool Update Successful");
	return true;
}

void RandomPool::print() {

	System::out << "**** Random Pool ****" << endl;
	for(int ii = 0; ii < this->size(); ++ii) {

		ManagedReference<ResourceSpawn* > spawn = this->get(ii);

		if(spawn != NULL)
			System::out << spawn->getName() << " : " << spawn->getType() << endl;
		else
			System::out << "EMPTY" << endl;
	}
	System::out << "**********************" << endl;
}
