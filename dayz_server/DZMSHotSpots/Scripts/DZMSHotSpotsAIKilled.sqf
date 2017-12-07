/*
	DZMSHotSpotsAIKilled.sqf by Vampire
	This function is called when an AI Unit is killed.
	It handles the humanity allocation and body cleanup.
*/

private ["_unit","_player","_humanity","_banditkills"];
_unit = _this select 0;
_player = _this select 1;

//If the killer is a player, lets handle the humanity

if (isPlayer _player) then {
	private ["_banditkills","_humanity"];
	
	//diag_log text format ["[DZMSHotSpots]: Debug: Unit killed by %1 at %2", _player, mapGridPosition _unit];
	
	//Lets grab some info
	_humanity = _player getVariable ["humanity",0];
	_banditkills = _player getVariable ["banditKills",0];
	
	//If the player gets humanity per config, lets give it
	if (DZMSHotSpotsMissHumanity) then {
		_player setVariable ["humanity",(_humanity + DZMSHotSpotsCntHumanity),true];
	};
	
	//If this counts as a bandit kill, lets give it
	if (DZMSHotSpotsCntBanditKls) then {
		_player setVariable ["banditKills",(_banditkills + 1),true];
	};
	
	//Lets inform the nearby AI of roughly the players position
	//This makes the AI turn and react instead of laying around
	{
		if (((position _x) distance (position _unit)) <= 300) then {
			_x reveal [_player, 4.0];
		}
	} forEach allUnits;
	
} else {

	//diag_log text format ["[DZMSHotSpots]: Debug: Unit killed by %1 at %2", _player, mapGridPosition _unit];

	if (DZMSHotSpotsRunGear) then {
		//Since a player ran them over, or they died from unknown causes
		//Lets strip their gear
	if (!isNull (unitBackpack _unit)) then {removeBackpack _unit;};

		removeAllWeapons _unit;
		{
			_unit removeMagazine _x
		} forEach magazines _unit;
	};
	
};

if (DZMSHotSpotsCleanDeath) then {
	_unit call sched_co_deleteVehicle;
	if (DZMSHotSpotsCleanDeath) exitWith {};
};

_unit setVariable ["bodyName","unknown",false]; //Only needed on server to prevent immediate cleanup in sched_corpses.sqf
if (DZMSHotSpotsUseNVG) then {
	_unit removeWeapon "NVGoggles";
};

if (DZMSUseAA AND (DZMS_AA_Weapon in (weapons _unit))) then {
	_unit removeWeapon DZMS_AA_Weapon;
	_unit removeMagazines DZMS_AA_Magazine;
};

if (DZMSUseAT AND (DZMS_AT_Weapon in (weapons _unit))) then {
	_unit removeWeapon DZMS_AT_Weapon;
	_unit removeMagazines DZMS_AT_Magazine;
};

//Dead body timer and cleanup
[DZMSHotSpotsBodyTime,10] call DZMSHotSpotsSleep;

//Delete flies and body
PVCDZ_flies = [0,_unit];
publicVariable "PVCDZ_flies";
_sound = _unit getVariable ["sched_co_fliesSource", nil];

if !(isNil "_sound") then {
	detach _sound;
	deleteVehicle _sound;
};



// Wait for PVEH to finish on all clients
uiSleep 15;
_unit call sched_co_deleteVehicle;
