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
**      Script:      Clean Up Taviana Map                                                                                                           **
**      Credits to:  F507DMT and hekut146                                                                                                           **
**      Source:      http://opendayz.net/threads/release-epoch-overpoch-origins-1-8.22050/                                                          **
**                                                                                                                                                  **
******************************************************************************************************************************************************
*****************************************************************************************************************************************************/

private ["_list"];
{
hideobject _x;_x hideObject true;_x enableSimulation false;
}count(nearestObjects [getMarkerPos "center", ["LAND_vetrak1","LAND_vetrak2","LAND_Ruske_kolo","Land_traktorkabina","Land_traktorpredek"],15000]);

_list=["Land_Misc_Cargo2D","Land_Misc_Cargo2B","Land_Misc_Cargo2E","Land_Misc_Cargo2D"];
{
{
hideobject _x;_x hideObject true;_x enableSimulation false;
}count(nearestObjects [_x select 0,_list,_x select 1]);
}forEach[[[3411,7852,0],200],[[5545,9808,0],270],[[11139,18620,0],70],[[17366,13031,0],100],[[1812,16920,0],70]];

{hideobject _x;_x hideObject true;_x enableSimulation false;}count(nearestObjects [getMarkerPos "center", ["Land_zombie_spawn"],18000]);

{_x animate ["ani_door1",1];}count(nearestObjects [getMarkerPos "center", ["Land_tav_HouseBlock_D1_ex2"],50000]);
{_x animate ["ani_grender1",1];}count(nearestObjects[[23405,5300,0],["Land_sh_mid_left","Land_sh_mid_right","Land_sh_part1","Land_sh_part1_budka","Land_sh_part2","Land_zabor1","Land_zabor2","Land_zabor3","Land_zabor4","Land_zabor5"],150]);