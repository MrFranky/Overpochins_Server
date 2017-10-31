class ZSC_Money_Display {
	idd = -1;
    fadeout=0;
    fadein=0;
	duration = 20;
	name= "ZSC_Money_Display";
	onLoad = "uiNamespace setVariable ['ZSC_Money_Display', _this select 0]";
	class controlsBackground {
		class ZSC_Status
		{
			idc = 4900;
			type = 13;
			size = 0.040;
            x = safezoneX + (safezoneW -0.35);
        	y = safezoneY + 0.43 * safezoneW;
			w = 0.35; h = 0.20;
			colorText[] = {1,1,1,1};
			lineSpacing = 3;
			colorBackground[] = {0,0,0,0};
			text = "";
			style = 0x02;
			shadow = 2;
			font = "Zeppelin32";
			sizeEx = 0.023;
			class Attributes {
				align = "right";
			};
		};
		class Humanityhud_HumanityIcon : RscPictureGUI
		{
			idc = 7701;
			text = "dayz_code\gui\status\humanity\survivor.paa";
			x = 0.92 * safezoneW + safezoneX;
			y = 0.07 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.07 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Humanityhud_HumanityBorder : RscPictureGUI
		{
			idc = 7702;
			text = "dayz_code\gui\status\humanity\humanity_border.paa";
			x = 0.92 * safezoneW + safezoneX;
			y = 0.07 * safezoneH + safezoneY;
			w = 0.075 * safezoneW;
			h = 0.075 * safezoneH;
			colorText[] = {1,1,1,0.3};
		};
		class Humanityhud_HumanityAmount: RscTextGUIK
		{
			idc = 7703;
			text = "2500";
			x = 0.9355 * safezoneW + safezoneX;
			y = 0.112 * safezoneH + safezoneY;
			w = 0.037 * safezoneW;
			h = 0.047 * safezoneH;
			size = 0.0275;
			sizeEx = 0.0275;
			colorText[] = {1,1,1,0.85};
		};
	
	
	};
};