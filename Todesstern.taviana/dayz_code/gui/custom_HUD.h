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
**      Script:      custom_HUD.h                                                                                                                    **
**      Credits to:  cen                                                                                                                            **
**      Source:      https://epochmod.com/forum/topic/16448-release-cens-custom-gui-for-epochoverpoch/                                              **
**                                                                                                                                                  **
*****************************************************************************************************************************************************/
//  x = ....  kleiner nach oben, größer nach unten
//  y = ....  kleiner nach links, größer nach rechts
//  w = ....  breite des bildes
//  h = ....  höhe des bildes
//  Bildformat 4:3 -> h=4, w=3 

#define CT_STATIC 0
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_PICTURE        48
    
    class playerStatusGUI {
        idd = 6900;
        movingEnable = 0;
        duration = 100000;
        name = "statusBorder";
        onLoad = "uiNamespace setVariable ['DAYZ_GUI_display', _this select 0];";
        class ControlsBackground {
            //COMBAT BACKGROUND
            class RscPicture_1209: RscPictureGUI
            {
            idc = 1209;
            text = "\z\addons\dayz_code\gui\status\status_bg.paa";
            x = 0.810 * safezoneW + safezoneX;
            y = 0.93 * safezoneH + safezoneY;
            w = 0.075;
            h = 0.10;
            };
            //COMBAT BORDER
            class RscPicture_1909: RscPictureGUI
            {
                idc = 1909;
                text = "\z\addons\dayz_code\gui\status\status_combat_border_new_CA.paa";
                x = 0.810 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
                size = 1.1;
                sizeEx = 1.1;
                colorText[] = {1,1,1,1};
            };
            //FOOD BACKGROUND
            class RscPicture_1901: RscPictureGUI
            {
                idc = 1901;
                text = "\z\addons\dayz_code\gui\status\status_bg.paa";
                x = 0.905 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //FOOD BORDER
            class RscPicture_1201: RscPictureGUI
            {
                idc = 1201;
                text = "\z\addons\dayz_code\gui\status\status_food_border_ca.paa";
                x = 0.905 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //BLOOD BACKGROUND
            class RscPicture_1900: RscPictureGUI
            {
                idc = 1900;
                text = "\z\addons\dayz_code\gui\status\status_bg.paa";
                x = 0.875 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY; 
                w = 0.075;
                h = 0.10;

            };
            //BLOOD BORDER
            class RscPicture_1200: RscPictureGUI
            {
                idc = 1200;
                text = "\z\addons\dayz_code\gui\status\status_blood_border_ca.paa";
                x = 0.875 * safezoneW + safezoneX;
                y = 0.93* safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //THIRST BACKGROUND
            class RscPicture_1902: RscPictureGUI
            {
                idc = 1902;
                text = "\z\addons\dayz_code\gui\status\status_bg.paa";
                x = 0.935 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;

            };
            //THIRST BORDER
            class RscPicture_1202: RscPictureGUI
            {
                idc = 1202;
                text = "\z\addons\dayz_code\gui\status\status_thirst_border_ca.paa";
                x = 0.935 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //TEMP BACKGROUND
            class RscPicture_1908: RscPictureGUI
            {
                idc = 1908;
                text = "\z\addons\dayz_code\gui\status\status_bg.paa";
                x = 0.845 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //TEMP BORDER
            class RscPicture_1208: RscPictureGUI
            {
                idc = 1208;
                text = "\z\addons\dayz_code\gui\status\status_temp_outside_ca.paa";
                x = 0.845 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //BROKEN LEG
            class RscPicture_1203: RscPictureGUI
            {
                idc = 1203;
                text = "\z\addons\dayz_code\gui\status\status_effect_brokenleg.paa";
                x=0.965 * safezoneW + safezoneX;
                y=0.775 * safezoneH + safezoneY;
                w=0.059999999;
                h=0.079999998;
                colorText[] = {1,1,1,1};
            };
            //NOISE BACKGROUND
            class RscPicture_1205: RscPictureGUI
            {
                idc = 1205;
                text = "\z\addons\dayz_code\gui\status\status_bg.paa";
                x = 0.965 * safezoneW + safezoneX;
                y = 0.825 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //VISIBLE BACKGROUND
            class RscPicture_1206: RscPictureGUI
            {
                idc = 1206;
                text = "\z\addons\dayz_code\gui\status\status_bg.paa";
                x = 0.965 * safezoneW + safezoneX;
                y = 0.875 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //FPS BACKGROUND
            class RscText_1322: RscPictureGUI
            {
                idc = 1322;
                text = "\z\addons\dayz_code\gui\status\status_bg.paa";
                x = 0.965 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //RANK ICON
            class RscPicture_7701 : RscPictureGUI
            {
                idc = 7701;
                text = "dayz_code\gui\status\humanity\zann-logo.paa";
                x = 0.905 * safezoneW + safezoneX;
                y = 0.07 * safezoneH + safezoneY;
                w = 0.0925 * safezoneW;         
                h = 0.13 * safezoneH;            // 4:3 ratio
                colorText[] = {1,1,1,1};
                shadow = 2;
            };
            //SURVIVOR KILL ICON
            class RscPicture_7710: RscPictureGUI
            {
                idc = 7710;
                text = "dayz_code\gui\status\humanity\zann-kill.paa";
                x = 0.627 * safezoneW + safezoneX;
                y = 0.933 * safezoneH + safezoneY;
                w = 0.027 * safezoneW;
                h = 0.037 * safezoneH;
                colorText[] = {1,1,1,1};
                shadow = 2;
            };
            //HERO KILL ICON
            class RscPicture_7711: RscPictureGUI
            {
                idc = 7711;
                text = "dayz_code\gui\status\humanity\rebel-kill.paa";
                x = 0.670 * safezoneW + safezoneX;
                y = 0.933 * safezoneH + safezoneY;
                w = 0.027 * safezoneW;
                h = 0.037 * safezoneH;
                colorText[] = {1,1,1,1};
                shadow = 2;
            };
            //BANDIT KILL ICON
            class RscPicture_7712: RscPictureGUI
            {
                idc = 7712;
                text = "dayz_code\gui\status\humanity\imperial-kill.paa";
                x = 0.713 * safezoneW + safezoneX;
                y = 0.933 * safezoneH + safezoneY;
                w = 0.027 * safezoneW;
                h = 0.037 * safezoneH;
                colorText[] = {1,1,1,1};
                shadow = 2;
            };
            //ZOMBIE KILL ICON
            class RscPicture_7713: RscPictureGUI
            {
                idc = 7713;
                text = "dayz_code\gui\status\humanity\zombie.paa";
                x = 0.756 * safezoneW + safezoneX;
                y = 0.933 * safezoneH + safezoneY;
                w = 0.027 * safezoneW;
                h = 0.037 * safezoneH;
                colorText[] = {1,1,1,1};
                shadow = 2;
            };
            // BANK ICON
            class RscPicture_7714: RscPictureGUI
            {
                idc = 7714;
                text = "dayz_code\gui\status\bank.paa";

                x = 0.973 * safezoneW + safezoneX;
                y = 0.23 * safezoneH + safezoneY;
                w = 0.06;
                h = 0.06;
                colorText[] = {1,1,1,1};
                lineSpacing = 3;
                shadow = 2;
            };
            //COINS ICON
            class RscPicture_7715: RscPictureGUI
            {
                idc = 7715;
                text = "dayz_code\gui\status\coins.paa";
                x = 0.9765 * safezoneW + safezoneX;
                y = 0.261 * safezoneH + safezoneY;
                w = 0.04;
                h = 0.05;
                colorText[] = {1,1,1,1};
                lineSpacing = 3;
                shadow = 2;
            };
        };
        class Controls {
            //FOOD ICON
            class RscPicture_1301: RscPictureGUI
            {
                idc = 1301;
                x = 0.905 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //BLOOD ICON
            class RscPicture_1300: RscPictureGUI
            {
                idc = 1300;
                x = 0.875 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //THIRST ICON
            class RscPicture_1302: RscPictureGUI
            {
                idc = 1302;
                x = 0.935 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //TEMP ICON
            class RscPicture_1306: RscPictureGUI
            {
                idc = 1306;
                x = 0.845 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //BLOOD ICON - BLEEDING
            class RscPicture_1303: RscPictureGUI
            {
                idc = 1303;
                text = "\z\addons\dayz_code\gui\status\status_bleeding_ca.paa";
                x = 0.875 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
                colorText[] = {1,1,1,0.5};
            };
            //NOISE ICON
            class RscPicture_1304: RscPictureGUI
            {
                idc = 1304;
                text = "\z\addons\dayz_code\gui\status\status_noise.paa";
                x = 0.965 * safezoneW + safezoneX;
                y = 0.825 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //VISIBLE ICON
            class RscPicture_1305: RscPictureGUI
            {
                idc = 1305;
                text = "\z\addons\dayz_code\gui\status\status_visible.paa";
                x = 0.965 * safezoneW + safezoneX;
                y = 0.875 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
            };
            //FPS
            class RscText_1321: RscTextGUIK
            {
                idc = 1321;
                text = "fps";
                x = 0.96 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                size = 0.065;
                sizeEx = 0.065;
                colorText[] = {1,1,1,0.0};
            };
            //COMBAT ICON
            class RscPicture_1308: RscPictureGUI
            {
                idc = 1308;
                text = "\z\addons\dayz_code\gui\status\status_combat_inside_new_ca.paa";
                x = 0.810 * safezoneW + safezoneX;
                y = 0.93 * safezoneH + safezoneY;
                w = 0.075;
                h = 0.10;
                size = 1.1;
                sizeEx = 1.1;
                colorText[] = {1,1,1,1};
            };
            //SURVIVOR KILL COUNTER
            class RscText_7400: RscTextGUIK
            {
                idc = 7400;
                text = "1000";
                x = 0.640 * safezoneW + safezoneX;
                y = 0.931 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
            //HERO KILL COUNTER
            class RscText_7401: RscTextGUIK
            {
                idc = 7401;
                text = "1000";
                x = 0.683 * safezoneW + safezoneX;
                y = 0.931 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
            //BANDIT KILL COUNTER
            class RscText_7402: RscTextGUIK
            {
                idc = 7402;
                text = "1000";
                x = 0.726 * safezoneW + safezoneX;
                y = 0.931 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
            //ZOMBIE KILL COUNTER
            class RscText_7403: RscTextGUIK
            {
                idc = 7403;
                text = "1000";
                x = 0.769 * safezoneW + safezoneX;
                y = 0.931 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
            //BLOOD AMOUNT
            class RscText_1420: RscTextGUIK
            {
                idc = 1420;
                text = "1000";
                x = 0.87 * safezoneW + safezoneX;
                y = 0.955 * safezoneH + safezoneY;
                w = 0.040 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {0.8,0.07,0.06,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
            //HUMANITY AMOUNT
            class RscText_7703: RscTextGUIK
            {
                idc = 7703;
                text = "1000";
                x = 0.933 * safezoneW + safezoneX;
                y = 0.18 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                size = 0.035;
                sizeEx = 0.035;
                colorText[] = {1,1,1,0.85};
                
            };
            //HERO LEVEL
            class RscText_7704: RscTextGUIK
            {
                idc = 7704;
                text = "";
                x = 0.9325 * safezoneW + safezoneX;
                y = 0.14 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                size = 0.05;
                sizeEx = 0.05;
                colorText[] = {1,1,1,0.85};
            };
            //BANDIT LEVEL
            class RscText_7705: RscTextGUIK
            {
                idc = 7705;
                text = "";
                x = 0.933 * safezoneW + safezoneX;
                y = 0.1122 * safezoneH + safezoneY;
                w = 0.037 * safezoneW;
                h = 0.047 * safezoneH;
                size = 0.05;
                sizeEx = 0.05;
                colorText[] = {1,1,1,1};
            };        
            //SERVER RESTART AMOUNT
            class RscText_1422: RscTextGUIK
            {
                idc = 1422;
                text = "1000";
                x = 0.915 * safezoneW + safezoneX;
                y = 0.882 * safezoneH + safezoneY;
                w = 0.040 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,0.8,0,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
            //RESTART LABEL
            class RscText_1425: RscTextGUIK
            {
                idc = 1425;
                text = "Restart in (min):";
                x = 0.845 * safezoneW + safezoneX;
                y = 0.882 * safezoneH + safezoneY;
                w = 0.08 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };            
            //PLAYERS ONLINE LABEL
            class RscText_1426: RscTextGUIK
            {
                idc = 1426;
                text = "Players Online:";
                x = 0.845 * safezoneW + safezoneX;
                y = 0.862 * safezoneH + safezoneY;
                w = 0.08 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
            //PLAYERS ONLINE AMOUNT
            class RscText_1427: RscTextGUIK
                {
                idc = 1427;
                text = "1000";
                x = 0.915 * safezoneW + safezoneX;
                y = 0.862 * safezoneH + safezoneY;
                w = 0.040 * safezoneW;
                h = 0.047 * safezoneH;
                colorText[] = {1,0.8,0,1.0};
                size = 0.03;
                sizeEx = 0.03;
            };
            //BANK AMOUNT
            class RscText_7100: RscTextGUIK
            {
                idc = 7100;
                text = "1000";
                x = 0.93 * safezoneW + safezoneX;
                y = 0.234 * safezoneH + safezoneY;
                w = 0.045 * safezoneW;
                h = 0.018 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.035;
                sizeEx = 0.035;
                style = ST_RIGHT;
            };
            //COINS AMOUNT
            class RscText_7101: RscTextGUIK
            {
                idc = 7101;
                text = "1000";
                x = 0.93 * safezoneW + safezoneX;
                y = 0.264 * safezoneH + safezoneY;
                w = 0.045 * safezoneW;
                h = 0.018 * safezoneH;
                colorText[] = {1,1,1,1.0};
                size = 0.035;
                sizeEx = 0.035;
                style = ST_RIGHT;
            };        
        };
    };

