if(isServer) then {
	private["_crate_type","_crate","_lootOptions","_position","_triggerdis","_playerPresent"];
	_position = [22614.5,19667.8,0];
	_triggerdis = 3500;
	_playerPresent = false;
	diag_log text "[WAI] Salvation City: Wait for Survivors...";
	waitUntil
	{
		uiSleep 5;
		{
			if(isPlayer _x && !_playerPresent) then {
				if((_x distance [(_position select 0),(_position select 1),0]) <= _triggerdis) then {
					_playerPresent = true;
				};
			};
		} forEach playableUnits;
		(_playerPresent)
	};
	diag_log text "[WAI] Salvation City: ...Survivors has been spotted near Salvation City";
	diag_log text "[WAI] Salvation City: M2 Statics spawning...";
	[
		[
			[22335.873, 19729.506, 23.68051],
			[22128.795, 19851.219, 13],
			[22913.914, 19873.234, 7.1063566],
			[22823.441, 19122.025, 0.31799182],
			[22548.508, 19857.285, 0.12499122],
			[23024.66, 19608.951, 0],
			[22503.445, 19513.377, 18.11031],
			[22400.043, 19663.672, 5.1850724],
			[22339.291, 19672.594, 23.598564],
			[22477.695, 20015.063, 0.00010633469],
			[22492.082, 19997.172, -4.7683716e-007],
			[22463.988, 19997.672, 0.0001912117],
			[22144.484, 19847, 3.1471252e-005],
			[22144.371, 19856.123, 8.1539154e-005]
		],									// Position(s) (can be multiple)
		"M2StaticMG",						// Classname of turret
		"extreme",							// Skill level of unit (easy, medium, hard, extreme, Random)
		"CZ_Soldier_SL_DES_EP1",			// Skin classname, use "Random" or classname here
		"Bandit",							// AI Type, "Hero" or "Bandit".
		"Random",							// Primary gun set number. "Random" for random weapon set
		2,									// Number of magazines
		"Random",							// Backpack classname, use "Random" or classname here
		"Random"							// Gearset classname, use "Random" or classname here
	] call spawn_static;
	diag_log text "[WAI] Salvation City: M2 Statics are Ready";

	diag_log text "[WAI] Salvation City: Soldiers spawning...";

	{
		[
			_x,									// Position
			3,									// Number Of units
			"extreme",							// Skill level of unit (easy, medium, hard, extreme, Random)
			["Random","aa"],					// Primary gun set number and rocket launcher. "Random" for random weapon set, "at" for anti-tank, "aa" for anti-air launcher
			4,									// Number of magazines
			"Random",							// Backpack classname, use "Random" or classname here
			"Random",							// Skin classname, use "Random" or classname here
			"Random",							// Gearset number. "Random" for random gear set
			["Bandit",0]						// AI Type, "Hero" or "Bandit".
		] call spawn_group;
	} forEach [
		[22173.096, 19852.148, 0],
		[22489.02, 20067.646, 0],
		[22299.654, 19966.893, 0],
		[22300.922, 19849.426, 0],
		[22444.941, 19493.844, 0],
		[22484.914, 19467.813, 0],
		[22687.939, 19782.752, 0],
		[22674.617, 19543.369, 0],
		[22200.582, 19645.807, 0],
		[22784.393, 19982.607, 0],
		[23048.168, 19385.92, 0],
		[22652.389, 19088.725, 0],
		[22183.514, 19867.072, 0],
		[22183.461, 19839.48, 0],
		[22486.357, 20014.682, 0],
		[22470.635, 20014.953, 0]
	];
	diag_log text "[WAI] Salvation City: Soldiers are Ready";
	_mayorGroup=[
		[22136.5, 19851.5, 5.79782],		// Position
		1,									// Number Of units
		"extreme",							// Skill level of unit (easy, medium, hard, extreme, Random)
		"unarmed",							// Primary gun set number and rocket launcher. "Random" for random weapon set, "at" for anti-tank, "aa" for anti-air launcher
		4,									// Number of magazines
		"none",								// Backpack classname, use "Random" or classname here
		"RUS_Commander",					// Skin classname, use "Random" or classname here
		"Random",							// Gearset number. "Random" for random gear set
		["Bandit",0]						// AI Type, "Hero" or "Bandit".
	] call spawn_group;
		
	_mayor = ((units _mayorGroup) select 0);
	_mayor addWeapon "Kostey_notebook";
	_mayor addWeapon "RH_Deagleg";
	_mayor addMagazine "RH_7Rnd_50_AE";
	_mayor addMagazine "RH_7Rnd_50_AE";
	_mayor addMagazine "RH_7Rnd_50_AE";
	
	diag_log text "Mayor has Stronghold 'Blueprint'!";
	
	
	diag_log text "[WAI] Salvation City: Lootboox spawning...";
	_lootOptions = [
		[[22719.357, 19679.701, 0],15],
		[[22478.41, 19997.326, 0],10],
		[[22179.547, 19851.357, 0],15]
	];

	{
		_crate_type 	= crates_large call BIS_fnc_selectRandom;
		_position		= (_x select 0);
		_crate 			= createVehicle [_crate_type,[(_position select 0),(_position select 1) ,0], [], 0, "CAN_COLLIDE"];
		[_crate,5,5,20,0,(_x select 1),1] call dynamic_crate;
	} forEach _lootOptions;
	
	
	diag_log text "[WAI] Salvation City: Lootboox spawned!"
};