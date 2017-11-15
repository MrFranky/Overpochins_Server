if (isServer) then {
	diag_log "Loading custom server compiles";	
};

if (!isDedicated) then {
	diag_log "Loading custom client compiles";
	
	fnc_usec_selfactions 	= compile preprocessFileLineNumbers "dayz_code\compile\fn_selfActions.sqf";
	player_humanityMorph 	= compile preprocessFileLineNumbers "dayz_code\compile\player_humanityMorph.sqf"; 				// This line can be removed when Epoch 1.0.6.2 comes out.
	player_updateGui		= compile preprocessFileLineNumbers "dayz_code\compile\player_updateGui.sqf";					// Humanity HUD
};


fnc_getPlayerHumanityLevel = {
private ["_playerHumanity"];
	_playerHumanity = player getVariable["humanity", 0];
	switch true do {
		case (abs _playerHumanity >= HumanityLevel_10)	: 	{PlayerHumanityLevel = 10};
		case (abs _playerHumanity >= HumanityLevel_9)	: 	{PlayerHumanityLevel = 9};
		case (abs _playerHumanity >= HumanityLevel_8) 	: 	{PlayerHumanityLevel = 8};
		case (abs _playerHumanity >= HumanityLevel_7) 	: 	{PlayerHumanityLevel = 7};
		case (abs _playerHumanity >= HumanityLevel_6) 	: 	{PlayerHumanityLevel = 6};
		case (abs _playerHumanity >= HumanityLevel_5) 	: 	{PlayerHumanityLevel = 5};
		case (abs _playerHumanity >= HumanityLevel_4) 	: 	{PlayerHumanityLevel = 4};
		case (abs _playerHumanity >= HumanityLevel_3) 	: 	{PlayerHumanityLevel = 3};
		case (abs _playerHumanity >= HumanityLevel_2) 	: 	{PlayerHumanityLevel = 2};
		case (abs _playerHumanity >= HumanityLevel_1) 	: 	{PlayerHumanityLevel = 1};
		default		{PlayerHumanityLevel = 0};
	};
	if (_playerHumanity < 0) then {PlayerHumanityLevel = -PlayerHumanityLevel};
};

fnc_getPlayerLoginHumanityLevel = {
	
	switch true do {
		case (abs Humanity >= HumanityLevel_10)	: 	{PlayerLoginHumanityLevel = 10};
		case (abs Humanity >= HumanityLevel_9)	: 	{PlayerLoginHumanityLevel = 9};
		case (abs Humanity >= HumanityLevel_8) 	: 	{PlayerLoginHumanityLevel = 8};
		case (abs Humanity >= HumanityLevel_7) 	: 	{PlayerLoginHumanityLevel = 7};
		case (abs Humanity >= HumanityLevel_6) 	: 	{PlayerLoginHumanityLevel = 6};
		case (abs Humanity >= HumanityLevel_5) 	: 	{PlayerLoginHumanityLevel = 5};
		case (abs Humanity >= HumanityLevel_4) 	: 	{PlayerLoginHumanityLevel = 4};
		case (abs Humanity >= HumanityLevel_3) 	: 	{PlayerLoginHumanityLevel = 3};
		case (abs Humanity >= HumanityLevel_2) 	: 	{PlayerLoginHumanityLevel = 2};
		case (abs Humanity >= HumanityLevel_1) 	: 	{PlayerLoginHumanityLevel = 1};
		default		{PlayerLoginHumanityLevel = 0};
	};
	
};



fnc_basespawn = {
private ["_pUID","_playerhasbase","_playerHumanityBase"];
	disableSerialization;	
	_pUID = getPlayerUID player;
	_playerhasbase = false;
	{
	if (_x getVariable ["ownerPUID","0"] == _pUID) then {
			_playerhasbase = true;
	};
	} count (entities "Plastic_Pole_EP1_DZ");
		
	call fnc_getPlayerLoginHumanityLevel;

	if (_playerhasbase) then {		
			if (PlayerLoginHumanityLevel >= BaseSpawnLevel) then {
				((_this select 0) displayCtrl 90010) ctrlSetText "dayz_code\gui\spawn\spawn_base.paa";
			} else {
				((_this select 0) displayCtrl 90011) ctrlSetText "dayz_code\gui\spawn\spawn_noLevel.paa";
			};	
		} else {
			((_this select 0) displayCtrl 90012) ctrlSetText "dayz_code\gui\spawn\spawn_nobase.paa";
		};
};
