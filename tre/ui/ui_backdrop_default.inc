	<Page
		BackgroundOpacity='1.00'
		Enabled='false'
		GetsInput='false'
		Name='Back'
		OnHide='-particle.visible=visible'
		OnShow='-particle.visible=visible'
		PackSize='1,1'
		particle.visible='true'
		ScrollExtent='800,450'
		Size='800,450'
		VisualEditLock='true'
	>
		<Data
			Backdrop00='station'
			Backdrop01='jedi'
			BackdropCount='2'
			Name='CodeData'
		/>
		<Image
			BackgroundOpacity='1.00'
			Name='jedi'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='800,450'
			Size='800,450'
			SourceRect='0,251,800,450'
			SourceResource='ui_background_jedi'
			Visible='false'
		/>
		<Image
			BackgroundOpacity='1.00'
			Name='station'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='800,450'
			Size='800,450'
			SourceRect='0,0,800,450'
			SourceResource='ui_background_arrow'
		/>
		<DataSource
			Name='viewerObjectDataSource'
		>
			<Data
				appearanceTemplate='appearance/pt_smoke.prt'
				Name='d'
			/>
		</DataSource>
		<Page
			Location='2,0'
			Name='bg'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='800,450'
			Size='800,450'
			Visible='false'
		>
			<Image
				Location='6,400'
				Name='station'
				PackLocation='nfn,fff'
				PackSize='f,f'
				ScrollExtent='445,394'
				Size='445,394'
				SourceRect='0,512,512,800'
				SourceResource='back1'
				Visible='false'
			/>
			<Image
				Location='453,400'
				Name='station'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='445,394'
				Size='445,394'
				SourceRect='512,512,800,800'
				SourceResource='back1'
				Visible='false'
			/>
			<Image
				Location='453,7'
				Name='station'
				PackLocation='fff,nfn'
				PackSize='f,f'
				ScrollExtent='445,394'
				Size='445,394'
				SourceRect='512,0,800,512'
				SourceResource='back1'
				Visible='false'
			/>
			<Image
				Location='6,7'
				Name='station'
				PackLocation='nfn,nfn'
				PackSize='f,f'
				ScrollExtent='445,394'
				Size='445,394'
				SourceRect='0,0,512,512'
				SourceResource='back1'
				Visible='false'
			/>
			<Image
				Location='0,-3'
				Name='station'
				PackLocation='nfn,nfn'
				PackSize='p,p'
				ScrollExtent='697,799'
				Size='697,799'
				SourceRect='0,0,512,512'
				SourceResource='ui_back_float_c'
				Visible='false'
			/>
			<Image
				Location='-2,-1'
				Name='station'
				PackLocation='cpc,cpc'
				PackSize='p,p'
				ScrollExtent='1029,769'
				Size='1029,769'
				SourceRect='0,0,512,512'
				SourceResource='ui_back_float_a'
				Visible='false'
			/>
			<Image
				BackgroundColor='#FFFFFF'
				BackgroundOpacity='1.00'
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='708,450'
				Size='708,450'
				SourceRect='0,0,511,511'
				SourceResource='ui_back_float_c'
				Style='background'
			/>
		</Page>
	</Page>
