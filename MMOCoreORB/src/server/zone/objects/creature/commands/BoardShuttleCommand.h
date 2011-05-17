/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
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

#ifndef BOARDSHUTTLECOMMAND_H_
#define BOARDSHUTTLECOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class BoardShuttleCommand : public QueueCommand {
public:

	BoardShuttleCommand(const String& name, ZoneProcessServer* server)
		: QueueCommand(name, server) {

	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) {

		if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidPostures(creature))
			return INVALIDPOSTURE;

		if (!creature->isPlayerCreature())
			return INVALIDPARAMETERS;

		ManagedReference<PlayerCreature*> player = (PlayerCreature*) creature;

		//@travel:no_pets You cannot board the shuttle when you are riding on a pet or in a vehicle.
		//@travel:boarding_too_far You are too far from the shuttle to board.
		//@travel:shuttle_not_available The shuttle is not available at this time.
		//@travel:route_not_available This ticket's route is no longer available.
		//@travel:boarding_what_shuttle What shuttle do you wish to board?
		//@travel:no_ticket You do not have a ticket to board this shuttle.
		//@travel:boarding_ticket_selecting You must select a ticket to use before boarding.
		//@travel:wrong_shuttle This ticket is not valid for the given shuttle.

		return SUCCESS;
	}

};

#endif //BOARDSHUTTLECOMMAND_H_
