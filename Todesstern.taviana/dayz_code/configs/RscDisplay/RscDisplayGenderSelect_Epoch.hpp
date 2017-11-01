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
**      Credits to:  Dayz Dev Team                                                                                                                  **
**      Source:      SQF/dayz_code/Configs/RscDisplay/RscDisplayGenderSelect.hpp                                                                    **
**                                                                                                                                                  **
******************************************************************************************************************************************************
*****************************************************************************************************************************************************/

class RscActiveText_epoch
{
    access=0;
    type=11;
    style=2;
    h=0.050000;
    w=0.150000;
    font="TahomaB";
    sizeEx=0.040000;
    color[]={1,1,1,1};
    colorActive[]={1,0.500000,0,1};
    soundEnter[]={"",0.100000,1};
    soundPush[]={"",0.100000,1};
    soundClick[]={"",0.100000,1};
    soundEscape[]={"",0.100000,1};
    text="";
    default=0;
    shadow = 0;
};

class RscDisplayGenderSelect_epoch
{
    idd = 6902;
    enableDisplay = 1;
    
    onLoad = "dayz_DisplayGenderSelect = true;";
    
    class controls
    {
        class GenderPic_Man : RscActiveText_epoch

        {
            idc = -1;
            style = 48;
            text = "z\addons\dayz_code\gui\gender_menu_man.paa";
            x = 0.28 * safezoneW + safezoneX;
            y = 0.24 * safezoneH + safezoneY;
            w = 0.117188 * safezoneW;
            h = 0.542373 * safezoneH;
            color[] = { 0.5, 0.5, 0.5, 1 };
            colorActive[] = { 1, 1, 1, 1 };
            action = "closeDialog 0;dayz_DisplayGenderSelect = false;dayz_selectGender = 'Survivor2_DZ';";
        };
        class GenderPic_Woman : RscActiveText_epoch

        {
            idc = -1;
            style = 48;
            text = "z\addons\dayz_code\gui\gender_menu_woman.paa";
            x = 0.6 * safezoneW + safezoneX;
            y = 0.24 * safezoneH + safezoneY;
            w = 0.117188 * safezoneW;
            h = 0.542373 * safezoneH;
            color[] = { 0.5, 0.5, 0.5, 1 };
            colorActive[] = { 1, 1, 1, 1 };
            action = "closeDialog 0;dayz_DisplayGenderSelect = false;dayz_selectGender = 'SurvivorW2_DZ';";
        };
        class Gender_Title: RscText
        {
            idc = -1;
            text = "$STR_UI_GENDER_TITLE";
            x = 0.4 * safezoneW + safezoneX;
            y = 0.221864 * safezoneH + safezoneY;
            w = 0.2 * safezoneW;
            h = 0.05 * safezoneH;
            colorBackground[] = {-1,-1,-1,0};
        };
        class Gender_Description: RscText
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
