/*
GearVersionDate: 170926
*/
class CAV_SquadLeader : CommonBlufor {                  // Squad Leader

    secondary[] = {"uns_m1911"};

    binoculars[] = {"Binocular"};

    magazines[] = {
		
        // M16 Magazines
        "uns_20Rnd_556x45_Stanag",5,
		"uns_20Rnd_556x45_Stanag_T",5,
		
        //Granades
        "uns_m61gren",6,
		
		//Sidearm
        "uns_m1911mag",2,

        //Smoke
        "uns_m18white",6,
        "uns_m18Blue",4,
        "uns_m18red",2,
		
		//Light sticks
		"Chemlight_yellow",2

    };
	
    items[] = {

        // Personal Medical Equipment
        "ACE_packingBandage",10,
        "ACE_tourniquet",2,
        "ACE_morphine",1,		
        
        // Standard
        "ACE_EarPlugs",
        "ACE_CableTie",

        // Tools
        "ACE_Flashlight_MX991",
        "ACE_MapTools",
        "ACE_SpraypaintBlue",
        "ACE_SpraypaintRed",
        "ACE_EntrenchingTool"
		
    };
};

class CAV_RTO : CommonBlufor {                   // Radio Telephone Operator

    backpack[] = {"tf_rt1523g_green"};

    binoculars[] = {"Binocular"};

};

class CAV_TeamLeader : CommonBlufor {                   // Fire Team Leader

    secondary[] = {"uns_m1911"};

    binoculars[] = {"Binocular"};

    magazines[] = {
		
        // M16 Magazines
        "uns_20Rnd_556x45_Stanag",5,
		"uns_20Rnd_556x45_Stanag_T",5,
		
        //Granades
        "uns_m61gren",6,
		
		//Sidearm
        "uns_m1911mag",2,

        //Smoke
        "uns_m18white",6,
        "uns_m18Blue",4,
        "uns_m18red",2,
		
		//Light sticks
		"Chemlight_yellow",2
		
    };
	
    items[] = {

        // Personal Medical Equipment
        "ACE_packingBandage",10,
        "ACE_tourniquet",2,
        "ACE_morphine",1,	
        
        // Standard
        "ACE_EarPlugs",
        "ACE_CableTie",

        // Tools
        "ACE_Flashlight_MX991",
        "ACE_MapTools",
        "ACE_SpraypaintBlue",
        "ACE_SpraypaintRed",
        "ACE_EntrenchingTool"
		
    };
};

class CAV_AutomaticRifleman : CommonBlufor {            // Automatic Rifleman

    primary[] = {"uns_m60"};
	
    secondary[] = {"uns_m1911"};

    magazines[] = {
		
		//M60 Magazines
        "uns_m60mag",6,
		
		//Sidearm
        "uns_m1911mag",2,
		
        //Granades
        "uns_m61gren",4,
		
		//Smoke
        "uns_m18white",2,
		
		//Light sticks
		"Chemlight_yellow",2	
		
    };
};

class CAV_Grenadier : CommonBlufor {                    // Grenadier

    backpack[] = {"UNS_Alice_F9"};

    primary[] = {"CUP_glaunch_M79"};
	
    secondary[] = {"uns_m1911"};

    magazines[] = {
		
        //Granades
        "uns_m61gren",4,
		
		//Sidearm
        "uns_m1911mag",2,

        //Smoke
        "uns_m18white",6,
		
		//GR Launcher HE
        "1Rnd_HE_Grenade_shell",25,
		
		//GR Launcher Smoke
		"1Rnd_Smoke_Grenade_shell",2,
        "1Rnd_SmokeRed_Grenade_shell",4,
        "1Rnd_SmokeYellow_Grenade_shell",2,
		
		//GR Launcher Flare
		"CUP_1Rnd_StarCluster_White_M203",3,
		"CUP_1Rnd_StarFlare_White_M203",10
		
    };
	
};

class CAV_Rifleman : CommonBlufor {                     // Rifleman

};


class CAV_AT : CommonBlufor {							// AT-Rifleman

    launcher[] = {"uns_m72"};

};

class CAV_CombatLifesaver : CommonBlufor {              // Combat Life Saver


    backpack[] = {"UNS_Alice_F2"};
	
    headgear[] = {"UNS_M1_1V1N"};
	
    uniform[] = {"UNS_ARMY_BDU"};
	
    vest[] = {"UNS_M1956_A4"};

    primary[] = {"uns_M16A1"};

    magazines[] = {
		
        // M16 Magazines
        "uns_20Rnd_556x45_Stanag",9,
		
        //Granades
        "uns_m61gren",2,

        //Smoke
        "uns_m18white",12,
        "uns_m18Blue",2,
		
		//Light sticks
		"Chemlight_yellow",2
		
    };
	
    items[] = {
		
        // Medical Equipment
        "ACE_personalAidKit",
        "ACE_fieldDressing",50,
		"ACE_elasticBandage",40,
        "ACE_tourniquet",4,
        "ACE_morphine",20,
        
        // Standard
        "ACE_EarPlugs",
        "ACE_CableTie",

        // Tools
		"ACE_Flashlight_MX991",
        "ACE_MapTools",
        "ACE_EntrenchingTool"
				
    };
    
    insignia[] = {"CLS_Insignia"};
    
    preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 0, true]";
	
};

class CAV_PlatoonMedic : CommonBlufor {                 // Platoon Medic


    backpack[] = {"UNS_Alice_F2"};
	
    headgear[] = {"UNS_M1_1V1N"};
	
    uniform[] = {"UNS_ARMY_BDU"};
	
    vest[] = {"UNS_M1956_A4"};

    primary[] = {"uns_M16A1"};

    magazines[] = {
		
        // M16 Magazines
        "uns_20Rnd_556x45_Stanag",6,
		
        //Granades
        "uns_m61gren",2,

        //Smoke
        "uns_m18white",10,
        "uns_m18Blue",2
		
    };
	
    items[] = {
		
        // Medical Equipment
        "ACE_personalAidKit",4,
        "ACE_surgicalKit",
        "ACE_packingBandage",50,
		"ACE_elasticBandage",40,
        "ACE_tourniquet",4,
        "ACE_morphine",20,
		"ACE_epinephrine",20,
        "ACE_bloodIV",4,
		"ACE_bloodIV_500",8,
        
        // Standard
        "ACE_EarPlugs",
        "ACE_CableTie",

        // Tools
		"ACE_Flashlight_MX991",
        "ACE_MapTools",
        "ACE_EntrenchingTool"
		
    };
	
    insignia[] = {"CLS_Insignia"};
	
    preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true]";
	
};

class CAV_Starlight : CommonBlufor {                    // Mobile Medic Team


    backpack[] = {"UNS_Alice_F2"};
	
    headgear[] = {"UNS_M1_1V1N"};
	
    uniform[] = {"UNS_ARMY_BDU"};
	
    vest[] = {"UNS_M1956_A4"};

    primary[] = {"uns_M16A1"};

    magazines[] = {
		
        // M16 Magazines
        "uns_20Rnd_556x45_Stanag",6,
		
        //Granades
        "uns_m61gren",2,

        //Smoke
        "uns_m18white",10,
        "uns_m18Blue",2
		
    };
	
    items[] = {
		
        // Medical Equipment
        "ACE_personalAidKit",4,
        "ACE_surgicalKit",
        "ACE_packingBandage",50,
		"ACE_elasticBandage",40,
        "ACE_tourniquet",4,
        "ACE_morphine",20,
		"ACE_epinephrine",20,
        "ACE_bloodIV",4,
		"ACE_bloodIV_500",8,
        
        // Standard
        "ACE_EarPlugs",
        "ACE_CableTie",

        // Tools
		"ACE_Flashlight_MX991",
        "ACE_MapTools",
        "ACE_EntrenchingTool"
		
    };

    insignia[] = {"CLS_Insignia"};
	
    preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 2, true]";
	
};

class CAV_Engineer : CommonBlufor {                     // Engineer

    backpack[] = {"UNS_Alice_2"};

	uniform[] = {"CUP_U_B_USMC_Officer_Eng"};
   
    vest[] = {"UNS_M1956_A9"};

    primary[] = {"uns_m14"};

    launcher[] = {"uns_m72"};
    
    magazines[] = {
		
        // M16 Magazines
        "uns_m14mag_NT",10,
		"uns_m1911mag",2,
		
		// Hand Flares
		"ACE_HandFlare_Red",4,
		
        //Granades
        "uns_m61gren",4,

        //Smoke
        "uns_m34gren",2,
        "uns_m61gren",2,
		"SmokeShell",4
		
    };
	
    items[] = {

        // Personal Medical Equipment
        "ACE_packingBandage",10,
        "ACE_tourniquet",2,
        "ACE_morphine",1,		
        
        // Standard
        "ACE_EarPlugs",
        "ACE_CableTie",

        // Tools
        "ACE_Flashlight_MX991",
        "ACE_MapTools",
        "ACE_EntrenchingTool",
		"ToolKit",
		"ACE_DefusalKit",
		"ACE_RangeTable_82mm"
		
    };

    //preLoadout = "(_this select 0) setVariable [""ACE_isEngineer"", true]";
	
};

class CAV_Officer : CommonBlufor {                      // Officer

    backpack[] = {"tf_rt1523g_green"};

    magazines[] = {
		
        // M16 Magazines
        "uns_20Rnd_556x45_Stanag",5,
		"uns_20Rnd_556x45_Stanag_T",5,

		
        //Granades
        "uns_m61gren",6,
		
		//Sidearm
        "uns_m1911mag",2,

        //Smoke
        "uns_m18white",6,
        "uns_m18Blue",4,
        "uns_m18red",2,

    };
	
    items[] = {

        // Personal Medical Equipment
        "ACE_packingBandage",10,
        "ACE_tourniquet",2,
        "ACE_morphine",1,		
        
        // Standard
        "ACE_EarPlugs",
        "ACE_CableTie",

        // Tools
        "ACE_Flashlight_MX991",
        "ACE_MapTools",
        "ACE_SpraypaintBlue",
        "ACE_SpraypaintRed",
        "ACE_EntrenchingTool"
		
    };

};

class CAV_FAC : CommonBlufor {                         // Forward Air Controller

    backpack[] = {"tf_rt1523g_green"};

    magazines[] = {

	     // M16 Magazines
        "uns_20Rnd_556x45_Stanag",5,
		"uns_20Rnd_556x45_Stanag_T",5,

        //Granades
        "uns_m61gren",6,

        //Smoke
        "uns_m18white",6,
        "uns_m18Blue",2,
        "uns_m18red",6,
		
    };
	
};
