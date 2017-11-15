class RscDisplaySpawnSelecter_tavi {
	idd = 90000;
	enableDisplay = 1;
	
	onLoad = "dayz_DisplaySpawnSelecter = true; _this call fnc_basespawn";
	//onUnload = "dayz_DisplaySpawnSelecter = false;";
	
	class controlsBackground {
		class Mainback : RscPicture {
			idc = -1;
			text = "dayz_code\gui\spawn\spawn_bg.paa";
			x = 0 * safezoneW + safezoneX - 0.0025;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
	};
	class controls
	{
		//Ilya
		class RscSelectedRegion1 : RscActiveText
		{
			onLoad = "if (dayz_selectRegion == 1) then {onMouseEnter = (_this select 0) ctrlShow false; (_this select 0) ctrlEnable false;};";
			idc = -1;
			style = 48 + 0x800;
			text = "dayz_code\gui\spawn\spawn_ilya.paa";
			x = 0.03 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY-0.05;			
			w = 0.34 * safezoneW;
			h = 0.34 * safezoneH;
			shadow = 0;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0;dayz_DisplaySpawnSelecter = false;dayz_selectRegion = 0;";
			onMouseEnter = "ctrlSetText [90013,'Ilya'];";
			onMouseExit = "ctrlSetText [90013,'SPAWN SELECTION'];";
		};
		//Mitrovice
		class RscSelectedRegion2: RscActiveText
		{
			onLoad = "if (dayz_selectRegion == 0) then {onMouseEnter = (_this select 0) ctrlShow false; (_this select 0) ctrlEnable false;};";
			idc = -1;
			style = 48 + 0x800;
			text = "dayz_code\gui\spawn\spawn_mitrovice.paa";
			x = 0.02 * safezoneW + safezoneX;
			y = 0.3 * safezoneH + safezoneY;
			w = 0.325 * safezoneW;
			h = 0.325 * safezoneH;
			shadow = 0;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0;dayz_DisplaySpawnSelecter = false;dayz_selectRegion = 1;";
			onMouseEnter = "ctrlSetText [90013,'Mitrovice'];";
			onMouseExit = "ctrlSetText [90013,'SPAWN SELECTION'];";
		};
		//Seven
		class RscSelectedRegion3: RscActiveText
		{
			onLoad = "if (dayz_selectRegion == 2) then {onMouseEnter = (_this select 0) ctrlShow false; (_this select 0) ctrlEnable false;};";
			idc = -1;
			style = 48 + 0x800;
			text = "dayz_code\gui\spawn\spawn_seven.paa";
			x = 0.03 * safezoneW + safezoneX;
			y = 0.7 * safezoneH + safezoneY;
			w = 0.325 * safezoneW;
			h = 0.325 * safezoneH;
			shadow = 0;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0;dayz_DisplaySpawnSelecter = false;dayz_selectRegion = 2;";
			onMouseEnter = "ctrlSetText [90013,'Seven'];";
			onMouseExit = "ctrlSetText [90013,'SPAWN SELECTION'];";

		};
		//Kameni
		class RscSelectedRegion4: RscActiveText
		{
			onLoad = "if (dayz_selectRegion == 3) then {onMouseEnter = (_this select 0) ctrlShow false; (_this select 0) ctrlEnable false;};";
			idc = -1;
			style = 48 + 0x800;
			text = "dayz_code\gui\spawn\spawn_kameni.paa";
			x = 0.45 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY - 0.05;
			w = 0.325 * safezoneW;
			h = 0.325 * safezoneH;
			shadow = 0;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0;dayz_DisplaySpawnSelecter = false;dayz_selectRegion = 3;";
			onMouseEnter = "ctrlSetText [90013,'Kameni'];";
			onMouseExit = "ctrlSetText [90013,'SPAWN SELECTION'];";		
			
		};
		//Etanovsk
		class RscSelectedRegion5: RscActiveText
		{
			onLoad = "if (dayz_selectRegion == 4) then {onMouseEnter = (_this select 0) ctrlShow false; (_this select 0) ctrlEnable false;};";
			idc = -1;
			style = 48 + 0x800;
			text = "dayz_code\gui\spawn\spawn_etanovsk.paa";
			x = 0.55 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.322 * safezoneW;
			h = 0.322 * safezoneH;
			shadow = 0;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0;dayz_DisplaySpawnSelecter = false;dayz_selectRegion = 4;";
			onMouseEnter = "ctrlSetText [90013,'Etanovsk'];";
			onMouseExit = "ctrlSetText [90013,'SPAWN SELECTION'];";	
		};
		//byelov
		class RscSelectedRegion6: RscActiveText
		{
			onLoad = "if (dayz_selectRegion == 5) then {onMouseEnter = (_this select 0) ctrlShow false; (_this select 0) ctrlEnable false;};";
			idc = -1;
			style = 48 + 0x800;
			text = "dayz_code\gui\spawn\spawn_byelov.paa";
			x = 0.555 * safezoneW + safezoneX;
			y = 0.653 * safezoneH + safezoneY;
			w = 0.325 * safezoneW;
			h = 0.325 * safezoneH;
			shadow = 0;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0;dayz_DisplaySpawnSelecter = false;dayz_selectRegion = 5;";
			onMouseEnter = "ctrlSetText [90013,'Byelov'];";
			onMouseExit = "ctrlSetText [90013,'SPAWN SELECTION'];";
		};
		//Random
		class RscSelectedRegionRandom: RscActiveText
		{
			idc = -1;
			style = 48 + 0x800;
			text = "dayz_code\gui\spawn\spawn_random.paa";
			x = 0.78 * safezoneW + safezoneX;
			y = 0.18 * safezoneH + safezoneY;
			w = 0.275 * safezoneW;
			h = 0.275 * safezoneH;
			shadow = 0;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0;dayz_DisplaySpawnSelecter = false;dayz_selectRegion = 9;";
			onMouseEnter = "ctrlSetText [90013,'Random'];";
			onMouseExit = "ctrlSetText [90013,'SPAWN SELECTION'];";
		};
		//Base
		class RscSelectedBase: RscActiveText
		{
			idc = 90010;
			style = 48 + 0x800;
			text = "";
			x = 0.755 * safezoneW + safezoneX;	//0.8
			y = 0.52 * safezoneH + safezoneY; 	//0.65
			w = 0.276 * safezoneW;
			h = 0.276 * safezoneH;
			shadow = 0;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0;dayz_DisplaySpawnSelecter = false;dayz_selectRegion = 8;";
			onMouseEnter = "ctrlSetText [90013,'Base'];";
			onMouseExit = "ctrlSetText [90013,'SPAWN SELECTION'];";
		};
		//noLevel
		class RscSelected_noLevel: RscActiveText
		{
			idc = 90011;
			style = 48 + 0x800;
			text = "";
			x = 0.755 * safezoneW + safezoneX;	//0.8
			y = 0.52 * safezoneH + safezoneY; 	//0.65
			w = 0.276 * safezoneW;
			h = 0.276 * safezoneH;
			shadow = 0;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			onMouseEnter = "ctrlSetText [90013, Format ['Level %1 required ',BaseSpawnLevel]];";
			onMouseExit = "ctrlSetText [90013,'SPAWN SELECTION'];";
		};
		//noBase
		class RscSelected_noBase: RscActiveText
		{
			idc = 90012;
			style = 48 + 0x800;
			text = "";
			x = 0.755 * safezoneW + safezoneX;	//0.8
			y = 0.52 * safezoneH + safezoneY; 	//0.65
			w = 0.276 * safezoneW;
			h = 0.276 * safezoneH;
			shadow = 0;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			onMouseEnter = "ctrlSetText [90013,'no base found'];";
			onMouseExit = "ctrlSetText [90013,'SPAWN SELECTION'];";
		};
		
		class Title: RscText
        {
            idc = 90013;
            text = "SPAWN SELECTION";
            x = 0.68 * safezoneW + safezoneX;
            y = 0.04 * safezoneH + safezoneY;
            w = 0.4 * safezoneW;
            h = 0.1 * safezoneH;
			style = 0x02 + 0x100; 
			font = Zeppelin32;
			sizeEx = 0.075;
			colorText[] = {0.8784,0.8471,0.651,1};
			colorBackground[] = {0, 0, 0, 0};
			shadow = 2;
        };
	};
};
