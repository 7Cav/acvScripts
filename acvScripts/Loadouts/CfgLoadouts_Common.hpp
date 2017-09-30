/*
GearVersionDate: 170926
*/
class CommonBlufor {
	
    backpack[] = {"UNS_Alice_5"};
	
    goggles[] = {""};
	
    headgear[] = {"UNS_M1_3A"};
	
    uniform[] = {"UNS_ARMY_BDU_1stCavSubdFlakpv1"};
	
    vest[] = {"UNS_M1956_A9"};

    primary[] = {"uns_m16"};
	
    secondary[] = {""};
	
    launcher[] = {""};
    
    binoculars[] = {""};

    magazines[] = {
		
        // M16 Magazines
		"uns_20Rnd_556x45_Stanag",9,
	
        //Granades
        "uns_m61gren",6,
		
        //Smoke
        "uns_m18white",6,
        "uns_m18Blue",2,
		
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
        "ACE_EntrenchingTool"
		
    };

    compass[] = {"ItemCompass"};
	
    gps[] = {""};
	
    map[] = {"ItemMap"};
	
    nvgs[] = {""};
	
    watch[] = {"ItemWatch"};

    insignia[] = {""};
	
    preLoadout = " \
        (_this select 0) setVariable [""ACE_medical_medicClass"", 0, true]; \
        (_this select 0) setVariable [""ACE_isEngineer"", false];";
		
    postLoadout = " \
        [(_this select 0), currentWeapon (_this select 0), currentMuzzle (_this select 0)] call ace_safemode_fnc_lockSafety; \
        [(_this select 0)] call ace_hearing_fnc_putInEarplugs";
		
};