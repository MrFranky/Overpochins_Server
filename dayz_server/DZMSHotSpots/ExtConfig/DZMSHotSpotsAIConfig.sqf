/*
	DZMSHotSpotsAIConfig.sqf
	This is a configuration for the AI that spawn at missions.
	This includes their skin, weapons, gear, and skills.
	You can adjust these to your liking, but it is for advanced users.
*/

///////////////////////////////////////////////
// Array of skin classnames for the AI to use
DZMSHotSpotsBanditSkins = [
"Bandit1_DZ",
"Camo1_DZ",
"BanditW2_DZ",
"GUE_Soldier_Crew_DZ",
"GUE_Soldier_2_DZ"
];
////////////////////////
// Array of AI Skills
DZMSHotSpotsSkillsOrig0 = [
	["aimingAccuracy",0.10,0.125],
	["aimingShake",0.45,0.55],
	["aimingSpeed",0.45,0.55],
	["endurance",0.40,0.50],
	["spotDistance",0.30,0.45],
	["spotTime",0.30,0.45],
	["courage",0.40,0.60],
	["reloadSpeed",0.50,0.60],
	["commanding",0.40,0.50],
	["general",0.40,0.60]
];

DZMSHotSpotsSkillsOrig1 = [
	["aimingAccuracy",0.125,0.15],
	["aimingShake",0.60,0.70],
	["aimingSpeed",0.60,0.70],
	["endurance",0.55,0.65],
	["spotDistance",0.45,0.60],
	["spotTime",0.45,0.60],
	["courage",0.55,0.75],
	["reloadSpeed",0.60,0.70],
	["commanding",0.55,0.65],
	["general",0.55,0.75]
];

DZMSHotSpotsSkillsOrig2 = [
	["aimingAccuracy",0.15,0.20],
	["aimingShake",0.75,0.85],
	["aimingSpeed",0.70,0.80],
	["endurance",0.70,0.80],
	["spotDistance",0.60,0.75],
	["spotTime",0.60,0.75],
	["courage",0.70,0.90],
	["reloadSpeed",0.70,0.80],
	["commanding",0.70,0.90],
	["general",0.70,0.90]
];

DZMSHotSpotsSkillsOrig3 = [	
	["aimingAccuracy",0.20,0.25],
	["aimingShake",0.85,0.95],
	["aimingSpeed",0.80,0.90],
	["endurance",0.80,0.90],
	["spotDistance",0.70,0.85],
	["spotTime",0.70,0.85],
	["courage",0.80,1.00],
	["reloadSpeed",0.80,0.90],
	["commanding",0.80,0.90],
	["general",0.80,1.00]
];
// values oriented at WAI
DZMSHotSpotsSkills0 = [	
	["aimingAccuracy",0.60,0.70],
	["aimingShake",0.69,0.71],
	["aimingSpeed",0.95,1.00],
	["endurance",0.95,1.00],
	["spotDistance",0.95,1.00],
	["spotTime",0.95,1.00],
	["courage",0.95,1.00],
	["reloadSpeed",0.95,1.00],
	["commanding",0.95,1.00],
	["general",0.95,1.00]
];
DZMSHotSpotsSkills1 = [	
	["aimingAccuracy",0.65,0.80],
	["aimingShake",0.69,0.80],
	["aimingSpeed",0.95,1.00],
	["endurance",0.95,1.00],
	["spotDistance",0.95,1.00],
	["spotTime",0.95,1.00],
	["courage",0.95,1.00],
	["reloadSpeed",0.95,1.00],
	["commanding",0.95,1.00],
	["general",0.95,1.00]
];
DZMSHotSpotsSkills2 = [	
	["aimingAccuracy",0.80,0.95],
	["aimingShake",0.80,0.95],
	["aimingSpeed",0.95,1.00],
	["endurance",0.95,1.00],
	["spotDistance",0.95,1.00],
	["spotTime",0.95,1.00],
	["courage",0.95,1.00],
	["reloadSpeed",0.95,1.00],
	["commanding",0.95,1.00],
	["general",0.95,1.00]
];
DZMSHotSpotsSkills3 = [	
	["aimingAccuracy",0.95,1.00],
	["aimingShake",0.95,1.00],
	["aimingSpeed",0.95,1.00],
	["endurance",0.95,1.00],
	["spotDistance",0.95,1.00],
	["spotTime",0.95,1.00],
	["courage",0.95,1.00],
	["reloadSpeed",0.95,1.00],
	["commanding",0.95,1.00],
	["general",0.95,1.00]
];
DZMSSkillsAA = [
	["aimingAccuracy",0.95,1.00],
	["aimingShake",0.95,1.00],
	["aimingSpeed",0.95,1.00],
	["endurance",0.95,1.00],
	["spotDistance",0.95,1.00],
	["spotTime",0.95,1.00],
	["courage",0.95,1.00],
	["reloadSpeed",0.95,1.00],
	["commanding",0.95,1.00],
	["general",0.95,1.00]
];

DZMSSkillsAT = [
	["aimingAccuracy",0.95,1.00],
	["aimingShake",0.95,1.00],
	["aimingSpeed",0.95,1.00],
	["endurance",0.95,1.00],
	["spotDistance",0.95,1.00],
	["spotTime",0.95,1.00],
	["courage",0.95,1.00],
	["reloadSpeed",0.95,1.00],
	["commanding",0.95,1.00],
	["general",0.95,1.00]
];
//////////////////////////////////////////////////////////////
// This is the primary weaponlist that can be assigned to AI
// These are assigned based on AI difficulty level

//Closecombat
DZMSHotSpotsWeps0 = [
						"Bizon_DZ", 
						"MP5_DZ", 
						"Bizon_SD_DZ",
						"UZI_SD_EP1",
						"MP5_SD_DZ",
						"Saiga12K",
						"Remington870_FL_DZ", 
						"M1014_DZ", 
						"AA12_PMC" 
					];
//Assault
DZMSHotSpotsWeps1 = [
						"AK74_Kobra_DZ",
						"AKS74U_DZ",
						"AKM_DZ",
						"AK74_DZ",
						"FNFAL_DZ",
						"FN_FAL_ANPVS4_DZE",
						"G36A_Camo_DZ",
						"G36C_DZ", 
						"G36C_camo",
						"G36K_Camo_DZ",
						"G36_C_SD_camo",
						"M16A2_DZ",
						"M16A2_GL_DZ",
						"M16A4_ACOG_DZ",
						"M4A1_DZ", 
						"M4A1_CCO_DZ", 
						"M4A1_AIM_SD_camo",
						"M4A1_HWS_GL_camo",
						"M4A3_CCO_EP1",
						"SA58_DZ",
						"SA58_CCO_DZ",
						"Sa58V_CCO_EP1", 
						"SA58_ACOG_DZ",
						"Sa58V_RCO_EP1", 
						"SA58_RIS_DZ",
						"m8_compact",
						"m8_sharpshooter",
						"m8_holo_sd",
						"m8_carbine",
						"L85A2_DZ",
						"M4A1_HWS_GL_SD_Camo",
						"SCAR_L_CQC_CCO_SD",
						"SCAR_L_CQC", 
						"SCAR_L_CQC_Holo", 
						"SCAR_L_CQC_EGLM_Holo", 
						"SCAR_L_STD_EGLM_RCO",
						"SCAR_L_STD_HOLO",
						"SCAR_L_STD_Mk4CQT",
						"SCAR_H_CQC_CCO", 
						"SCAR_H_CQC_CCO_SD", 
						"SCAR_H_STD_EGLM_Spect"
					];
//Sniper
DZMSHotSpotsWeps2 = [
						"AK_107_PSO",
						"M4SPR",
						"M40A3_DZ",
						"SVD_PSO1_Gh_DZ",
						"SVD_PSO1_DZ",
						"CZ550_DZ",
						"M24_des_EP1",
						"M24_DZ",
						"VSS_vintorez",
						"M14_DZ",
						"M110_NVG_EP1"
					];
//ALL
DZMSHotSpotsWeps3 = [
						"Bizon_DZ","MP5_DZ","Bizon_SD_DZ","UZI_SD_EP1","MP5_SD_DZ","Saiga12K","Remington870_FL_DZ","M1014_DZ","AA12_PMC",
						"AK74_Kobra_DZ","AKS74U_DZ","AKM_DZ","AK74_DZ","FNFAL_DZ","FN_FAL_ANPVS4_DZE","G36A_Camo_DZ","G36C_DZ","G36C_camo","G36K_Camo_DZ","G36_C_SD_camo","M16A2_DZ","M16A2_GL_DZ","M16A4_ACOG_DZ","M4A1_DZ","M4A1_CCO_DZ",
						"M4A1_AIM_SD_camo","M4A3_CCO_EP1","SA58_DZ","SA58_CCO_DZ","Sa58V_CCO_EP1","SA58_ACOG_DZ","Sa58V_RCO_EP1","SA58_RIS_DZ","m8_compact","m8_sharpshooter","m8_holo_sd","m8_carbine","L85A2_DZ","M4A1_HWS_GL_SD_Camo",
						"SCAR_L_CQC_CCO_SD","SCAR_L_CQC","SCAR_L_CQC_Holo","SCAR_L_CQC_EGLM_Holo","SCAR_L_STD_EGLM_RCO","SCAR_L_STD_HOLO","SCAR_L_STD_Mk4CQT","SCAR_H_CQC_CCO","SCAR_H_CQC_CCO_SD","SCAR_H_STD_EGLM_Spect",
						"AK_107_PSO","M4SPR","M40A3_DZ","SVD_PSO1_Gh_DZ","SVD_PSO1_DZ","CZ550_DZ","M24_des_EP1","M24_DZ",
						"VSS_vintorez","M14_DZ","M110_NVG_EP1","RPK74_DZ","M8_SAW","Pecheneg_DZ","PKM_DZ","L110A1_DZ","MG36_camo","M60A4_EP1_DZE","MG36","M249_m145_EP1_DZE","m240_scoped_EP1_DZE","M240_DZ","M249_DZ","Mk48_DZ","BAF_L86A2_ACOG"
					];	
//Heavy Gunner					
DZMSHotSpotsWeps4 = [
						"RPK74_DZ",
						"M8_SAW",
						"Pecheneg_DZ",
						"PKM_DZ",
						"L110A1_DZ",
						"MG36_camo",
						"M60A4_EP1_DZE",
						"MG36",
						"M249_m145_EP1_DZE",
						"m240_scoped_EP1_DZE",
						"M240_DZ",
						"M249_DZ",
						"Mk48_DZ",
						"BAF_L86A2_ACOG"
					];
//Assault2
DZMSHotSpotsWeps5 = [
						"AK74_Kobra_DZ",
						"AKS74U_DZ",
						"AKM_DZ",
						"AK74_DZ",
						"FNFAL_DZ",
						"FN_FAL_ANPVS4_DZE",
						"G36A_Camo_DZ",
						"G36C_DZ", 
						"G36C_camo",
						"G36K_Camo_DZ",
						"G36_C_SD_camo",
						"M16A2_DZ",
						"M16A2_GL_DZ",
						"M16A4_ACOG_DZ",
						"M4A1_DZ", 
						"M4A1_CCO_DZ", 
						"M4A1_AIM_SD_camo",
						"M4A1_HWS_GL_camo",
						"M4A3_CCO_EP1",
						"SA58_DZ",
						"SA58_CCO_DZ",
						"Sa58V_CCO_EP1", 
						"SA58_ACOG_DZ",
						"Sa58V_RCO_EP1", 
						"SA58_RIS_DZ",
						"m8_compact",
						"m8_sharpshooter",
						"m8_holo_sd",
						"m8_carbine",
						"L85A2_DZ",
						"M4A1_HWS_GL_SD_Camo",
						"SCAR_L_CQC_CCO_SD",
						"SCAR_L_CQC", 
						"SCAR_L_CQC_Holo", 
						"SCAR_L_CQC_EGLM_Holo", 
						"SCAR_L_STD_EGLM_RCO",
						"SCAR_L_STD_HOLO",
						"SCAR_L_STD_Mk4CQT",
						"SCAR_H_CQC_CCO", 
						"SCAR_H_CQC_CCO_SD", 
						"SCAR_H_STD_EGLM_Spect"
					];
				
					
/////////////////////////////////////////////////////////////
// These are gear sets that will be randomly given to the AI
// They are all the same, but can be customized.
DZMSHotSpotsGear00 = [
["SmokeShell","ItemPainkiller"],
["ItemFlashlight"]
];
DZMSHotSpotsGear01 = [
["ItemBandage","FoodCanBakedBeans"],
["ItemFlashlight"]
];
DZMSHotSpotsGear02 = [
["ItemMorphine","ItemPainkiller"],
["ItemFlashlight"]
];
DZMSHotSpotsGear03 = [
["ItemBandage","ItemSodaCoke"],
["ItemFlashlight"]
];
DZMSHotSpotsGear04 = [
["ItemBandage","ItemPainkiller"],
["ItemKnife"]
];
DZMSHotSpotsGear05 = [
["ItemBandage","ItemPainkiller"],
["ItemWatch"]
];
DZMSHotSpotsGear06 = [
["ItemBandage","ItemPainkiller"],
["ItemMatchbox"]
];
DZMSHotSpotsGear07 = [
["ItemBandage","ItemPainkiller"],
["ItemHatchet"]
];
DZMSHotSpotsGear08 = [
["ItemBandage","ItemPainkiller"],
["ItemCompass"]
];
DZMSHotSpotsGear09 = [
["ItemBandage","ItemPainkiller"],
["ItemMap"]
];
DZMSHotSpotsGear10 = [
["ItemBandage","ItemPainkiller"],
["ItemCrowbar"]
];
DZMSHotSpotsGear11 = [
["ItemBandage","ItemPainkiller"],
["Binocular"]
];
DZMSHotSpotsGear12 = [
["ItemBandage","ItemPainkiller"],
["ItemToolbox"]
];
DZMSHotSpotsGear13 = [
["ItemGoldBar","ItemPainkiller"],
["ItemFlashlight"]
];
DZMSHotSpotsGear14 = [
["PartGeneric","ItemBandage"],
["ItemFlashlight"]
];
DZMSHotSpotsGear15 = [
["PartGlass","ItemPainkiller"],
["ItemFlashlight"]
];
DZMSHotSpotsGear16 = [
["PartWheel","ItemBandage"],
["ItemFlashlight"]
];
DZMSHotSpotsGear17 = [
["PartEngine","ItemPainkiller"],
["ItemFlashlight"]
];
DZMSHotSpotsGear18 = [
["PartFueltank","ItemBandage"],
["ItemFlashlight"]
];
////////////////////////////////////////////////////////////
// These are the backpacks that can be assigned to AI units.
DZMSHotSpotsPacklist = [
"DZ_Patrol_Pack_EP1",
"DZ_Assault_Pack_EP1",
"DZ_Czech_Vest_Pouch",
"DZ_ALICE_Pack_EP1",
"DZ_TK_Assault_Pack_EP1",
"DZ_British_ACU",
"DZ_CivilBackpack_EP1",
"DZ_Backpack_EP1"
];