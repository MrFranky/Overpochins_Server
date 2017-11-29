/*****************************************************************************************************************************************************
******************************************************************************************************************************************************
**                                                                                                                                                  **
**                Edited by                                                                                                                         **
**               ██████╗ ███████╗ █████╗ ████████╗██╗  ██╗    ███████╗████████╗ █████╗ ██████╗      ██████╗██████╗ ███████╗██╗    ██╗               ** 
**               ██╔══██╗██╔════╝██╔══██╗╚══██╔══╝██║  ██║    ██╔════╝╚══██╔══╝██╔══██╗██╔══██╗    ██╔════╝██╔══██╗██╔════╝██║    ██║               **
**               ██║  ██║█████╗  ███████║   ██║   ███████║    ███████╗   ██║   ███████║██████╔╝    ██║     ██████╔╝█████╗  ██║ █╗ ██║               **
**               ██║  ██║██╔══╝  ██╔══██║   ██║   ██╔══██║    ╚════██║   ██║   ██╔══██║██╔══██╗    ██║     ██╔══██╗██╔══╝  ██║███╗██║               **
**               ██████╔╝███████╗██║  ██║   ██║   ██║  ██║    ███████║   ██║   ██║  ██║██║  ██║    ╚██████╗██║  ██║███████╗╚███╔███╔╝               **
**               ╚═════╝ ╚══════╝╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝    ╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝     ╚═════╝╚═╝  ╚═╝╚══════╝ ╚══╝╚══╝                **
**                                                                                                         powered by Chaotentrupp.net              **
**      Script:     extra_rc.hpp                                                                                                                    **
**      Credits to: Maca134, Friendly                                                                                                               **
**      Source:     https://epochmod.com/forum/topic/8438-right-clickchange-view-distance-with-rangefinders/                                        **
**                                                                                                                                                  **
******************************************************************************************************************************************************
*****************************************************************************************************************************************************/

class ExtraRc {

	class Binocular_Vector  {
                class viewdistanceTitle {
                        text = "View Distance:";
                        script = "systemChat('Change View Distance Locally. Click on one of the distance options');";
                };
				class distance3000m {
                        text = "3000 Meters";
                        script = "setViewDistance 3000; systemChat('ViewDistance: 3000m');";
                };
                class distance3500m {
                        text = "3500 Meters";
                        script = "setViewDistance 3500; systemChat('ViewDistance: 3500m');";
                };
                class distance4000m {
                        text = "4000 Meters";
                        script = "setViewDistance 4000; systemChat('ViewDistance: 4000m'); systemChat('Warning: Higher the view distance Lower the FPS');";
                };
				class distance4500m {
                        text = "4500 Meters";
                        script = "setViewDistance 4500; systemChat('ViewDistance: 4500m'); systemChat('Warning: Higher the view distance Lower the FPS');";
                };
                class distance5000m {
                        text = "5000 Meters";
                        script = "setViewDistance 5000; systemChat('ViewDistance: 5000m'); systemChat('Warning: Higher the view distance Lower the FPS');";
                };
        };
    class Binocular {
                class viewdistanceTitle {
                        text = "View Distance:";
                        script = "systemChat('Change View Distance Locally. Click on one of the distance options');";
                };
                class distance3000m {
                        text = "3000 Meters";
                        script = "setViewDistance 3000; systemChat('ViewDistance: 3000m');";
                };
                class distance3500m {
                        text = "3500 Meters";
                        script = "setViewDistance 3500; systemChat('ViewDistance: 3500m');";
                };
                class distance4000m {
                        text = "4000 Meters";
                        script = "setViewDistance 4000; systemChat('ViewDistance: 4000m'); systemChat('Warning: Higher the view distance Lower the FPS');";
                };
				class distance4500m {
                        text = "4500 Meters";
                        script = "setViewDistance 4500; systemChat('ViewDistance: 4500m'); systemChat('Warning: Higher the view distance Lower the FPS');";
                };
                class distance5000m {
                        text = "5000 Meters";
                        script = "setViewDistance 5000; systemChat('ViewDistance: 5000m'); systemChat('Warning: Higher the view distance Lower the FPS');";
                };
        };
};
