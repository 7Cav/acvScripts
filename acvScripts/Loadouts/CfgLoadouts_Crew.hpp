/*
GearVersionDate: 170926
*/

class CAV_TankCommander : CommonBlufor {            // Tank Commander

    headgear[] = {"UNS_TC_2"};
	
	vest[] = {"UNS_M1956_T1"};
	
	primary[] = {"uns_thompson"};
	
    secondary[] = {"uns_m1911"};

    binoculars[] = {"Binocular"};

    magazines[] = {
       
		// Thompson Magazines
	   "uns_thompsonmag_30",7,

        //Granades
        "uns_m61gren",2,
		
		//Sidearm
        "uns_m1911mag",2,

        //Smoke
        "uns_m18white",4,
        "uns_m18Blue",2,
        "uns_m18red",2,
		"uns_m18Yellow",1,
		
		//Light sticks
		"Chemlight_yellow",2,
		
		//Explosives
		"SatchelCharge_Remote_Mag",1	
		
    };

};

class CAV_TankCrew : CommonBlufor {               // Tank Crew

    backpack[] = {"UNS_USMC_E1"};

    headgear[] = {"UNS_TC_1"};
	
	vest[] = {"UNS_M1956_T1"};
	
	primary[] = {"uns_m3a1"};
	
	launcher[] = {"uns_m72"};
	
    binoculars[] = {"Binocular"};
	
    magazines[] = {
		
        // M3A1 Magazines
		"uns_m3a1mag",7,
	
        //Granades
        "uns_m61gren",2,
		
        //Smoke
        "uns_m18white",6,
        "uns_m18Blue",1,
        "uns_m18red",2,
		"uns_m18Yellow",1,
		
		//Light sticks
		"Chemlight_yellow",2
		
    };

};

class CAV_ATC : CommonBlufor {				//Air Trafic Controller

    backpack[] = {"tf_rt1523g_green"};
	
    goggles[] = {"G_Combat"};
	
    headgear[] = {"H_Cap_marshal"};
	
	uniform[] = {"CUP_U_B_USMC_Pilot"};
	
    vest[] = {"ACV_LHDVest_Yellow"};

    primary[] = {""};
	
    binoculars[] = {"Binocular"};
	
	    magazines[] = {		
    };
	
	
	
};

class CAV_HeloPilot : CommonBlufor {                // Helo Pilot

	headgear[] = {"UNS_HP_Helmet"};
	
	uniform[] = {"UNS_Pilot_BDU"};
	
    vest[] = {"CUP_V_B_PilotVest"};

    primary[] = {"uns_thompson"};

    magazines[] = {
		
        // Thompson Magazines
		"uns_thompsonmag_30",5,
	
        //Granades
        "uns_m61gren",2,
		
        //Smoke
        "uns_m18white",6,
        "uns_m18Blue",1,
		"uns_m18Red",1,
		
		//Light sticks
		"Chemlight_yellow",2
		
    };

};

class CAV_HeloCrew : CommonBlufor {                // Helo Pilot

	headgear[] = {"UNS_HP_Helmet"};
	
	uniform[] = {"UNS_Pilot_BDU"};
	
    vest[] = {"CUP_V_B_PilotVest"};

    primary[] = {"uns_thompson"};

    magazines[] = {
		
        // Thompson Magazines
		"uns_thompsonmag_30",5,
	
        //Granades
        "uns_m61gren",2,
		
        //Smoke
        "uns_m18white",6,
        "uns_m18Blue",1,
		"uns_m18Red",1,
		
		//Light sticks
		"Chemlight_yellow",2
		
    };

};

class CAV_FixedPilot : CommonBlufor {				// Fixed Wing Pilot

    backpack[] = {"UNS_BA22_Para"}; 						// -----<>>>--- must have access to tf_rt1523g   <- is there a script for parachute?
	
    headgear[] = {"UNS_JP_Helmet2"};
	
	uniform[] = {"CUP_U_B_USMC_Pilot"};
	
    vest[] = {"UNS_JP_Vest"};
	
	primary[] = {""};
	
	secondary[] = {"uns_m1911"};	

    binoculars[] = {"Binocular"};

    magazines[] = {
		
		//Sidearm
        "uns_m1911mag",2,
		
        //Granades
        "uns_m61gren",2,
		
        //Smoke
        "uns_m18white",6,
        "uns_m18Blue",1,
		
		//Light sticks
		"Chemlight_yellow",2
		
    };

};
