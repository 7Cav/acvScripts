/*
GearVersionDate: 170926
*/

class CAV_Ranger : CommonBlufor {

    secondary[] = {"uns_m1911"};

    binoculars[] = {"Binocular"};

    magazines[] = {

	    // M16 Magazines
        "uns_20Rnd_556x45_Stanag",5,
		"uns_20Rnd_556x45_Stanag_T",5,
		
        //Granades
        "uns_m61gren",6,
		
		//Sidearm
        "uns_m1911mag",4,

        //Smoke
        "uns_m18white",6,
        "uns_m18Blue",4,
        "uns_m18red",2,
	
    };
	
     watch[] = {"ACE_Altimeter"};
	
};

class CAV_Sniper : CommonBlufor {

    secondary[] = {"uns_m1911"};
	
    binoculars[] = {"Binocular"};

    magazines[] = {

	    // M16 Magazines
        "uns_20Rnd_556x45_Stanag",5,
		"uns_20Rnd_556x45_Stanag_T",5,
		
        //Granades
        "uns_m61gren",6,
		
		//Sidearm
        "uns_m1911mag",4,

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
		"ACE_RangeCard",
        "ACE_EntrenchingTool"
		
    };    
	
    watch[] = {"ACE_Altimeter"};
	
};

class CAV_Spotter : CAV_Sniper {

    secondary[] = {"uns_m1911"};

    binoculars[] = {"Binocular"};

    magazines[] = {

	    // M16 Magazines
        "uns_20Rnd_556x45_Stanag",5,
		"uns_20Rnd_556x45_Stanag_T",5,
		
        //Granades
        "uns_m61gren",6,
		
		//Sidearm
        "uns_m1911mag",4,

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
		"ACE_RangeCard",
        "ACE_EntrenchingTool"
		
    };  
	
    watch[] = {"ACE_Altimeter"};
	
};