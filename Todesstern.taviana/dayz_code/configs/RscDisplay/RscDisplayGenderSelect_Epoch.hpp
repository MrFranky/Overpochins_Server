/*****************************************************************************************************************************************************
******************************************************************************************************************************************************
**                             Edited by                                                                                                            **
**                             ████████╗ ██████╗ ██████╗ ███████╗███████╗███████╗████████╗███████╗██████╗ ███╗   ██╗                                **
**                             ╚══██╔══╝██╔═══██╗██╔══██╗██╔════╝██╔════╝██╔════╝╚══██╔══╝██╔════╝██╔══██╗████╗  ██║                                **
**                                ██║   ██║   ██║██║  ██║█████╗  ███████╗███████╗   ██║   █████╗  ██████╔╝██╔██╗ ██║                                **
**                                ██║   ██║   ██║██║  ██║██╔══╝  ╚════██║╚════██║   ██║   ██╔══╝  ██╔══██╗██║╚██╗██║                                **
**                                ██║   ╚██████╔╝██████╔╝███████╗███████║███████║   ██║   ███████╗██║  ██║██║ ╚████║                                **
**                                ╚═╝    ╚═════╝ ╚═════╝ ╚══════╝╚══════╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝                                **
**                                                                                      powered by Chaotentrupp.net                                 **
**      Script:      RscDisplayGenderSelect_epoch.hpp                                                                                               **
**      Credits to:  Dayz Epoch Team                                                                                                                **
**      Source:      SQF/dayz_code/Configs/RscDisplay/RscDisplayGenderSelect.hpp                                                                    **
**                                                                                                                                                  **
******************************************************************************************************************************************************
*****************************************************************************************************************************************************/

class RscActiveText_GENDER
{
	access = 0;
	type = 11;
	style = 2;
	color[] = {0,0,0,1};
	colorActive[] = {0.3,0.4,0,1};
	soundEnter[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	soundClick[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
	text = "";
	default = 0;
	idc = -1;
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.035;
	font = "Zeppelin32";
	shadow = 0;
	sizeEx = 0.03921;
	colortext[] = {0,0,0,1};
};

class RscPicture_GENDER
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
};

class RscText_GENDER
{
	type = 0;
	idc = -1;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0x02 + 0x100; 
	font = Zeppelin32;
	SizeEx = 0.04921;
	colorText[] = {0.8784,0.8471,0.651,1};
	colorBackground[] = {0, 0, 0, 0};
	shadow = 2;
	linespacing = 1;
};
class RscStructuredText_GENDER
{
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {0.8784,0.8471,0.651,1};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#e0d8a6";
		align = "center";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = 0.03921;
	shadow = 2;
};

class RscDisplayGenderSelect_epoch
{
    idd = 6902;
    enableDisplay = 1;
    
    onLoad = "dayz_DisplayGenderSelect = true;";
    
	
	class controlsBackground
    {
        class backgroundpic : RscPicture_GENDER
        {
                idc = -1;
				x = 0 * safezoneW + safezoneX;
				y = 0 * safezoneH + safezoneY;
				w = 1 * safezoneW;
				h = 1 * safezoneH;
                text = "dayz_code\gui\gender_bg.paa";
        };
    };
    class controls
    {
        class GenderPic_Man : RscActiveText_GENDER

        {
            idc = -1;
            style = 48 + 0x800;
            text = "dayz_code\gui\gender_menu_woman.paa";
            x = 0.28 * safezoneW + safezoneX;
            y = 0.39 * safezoneH + safezoneY;
            w = 0.117188 * safezoneW;
            h = 0.542373 * safezoneH;
			size = 0.9;
            color[] = { 0.5, 0.5, 0.5, 1 };
            colorActive[] = { 1, 1, 1, 1 };
            action = "closeDialog 0;dayz_DisplayGenderSelect = false;dayz_selectGender = 'SurvivorW2_DZ';";
        };
        class GenderPic_Woman : RscActiveText_GENDER

        {
            idc = -1;
            style = 48 + 0x800;
            text = "dayz_code\gui\gender_menu_man.paa";
            x = 0.65 * safezoneW + safezoneX;
            y = 0.36 * safezoneH + safezoneY;
            w = 0.117188 * safezoneW;
            h = 0.542373 * safezoneH;
			size = 0.8;
            color[] = { 0.5, 0.5, 0.5, 1 };
            colorActive[] = { 1, 1, 1, 1 };
            action = "closeDialog 0;dayz_DisplayGenderSelect = false;dayz_selectGender = 'Survivor2_DZ';";
        };
        class Gender_Title: RscText_GENDER
        {
            idc = -1;
            text = "$STR_UI_GENDER_TITLE";
            x = 0.4 * safezoneW + safezoneX;
            y = 0.241864 * safezoneH + safezoneY;
            w = 0.2 * safezoneW;
            h = 0.05 * safezoneH;
            colorBackground[] = {-1,-1,-1,0};
        };
        class Gender_Description: RscStructuredText_GENDER
        {
            idc = -1;
            text = "$STR_UI_GENDER_DESC";
            x = 0.4 * safezoneW + safezoneX;
            y = 0.366134 * safezoneH + safezoneY;
            w = 0.2 * safezoneW;
            h = 0.3 * safezoneH;
            colorBackground[] = {-1,-1,-1,0};
        };
    };
};
