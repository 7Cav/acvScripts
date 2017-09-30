class CAV_Cadre : CommonBlufor {                            // CADRE
    uniform[] 		= {""};
	vest[] 			= {""};
    headgear[] 		= {""};
	goggles[] 		= {""};
    nvgs[] 			= {""};
	backpack[] 		= {""};
	magazines[] 	= {
		
        MAG_PRIMARY, 2,
        GRENADE
		
    };

};
    
class CAV_DrillInstructor : CommonBlufor {                  // DRILL INSTRUCTOR
    uniform[]       = {""};
    vest[]          = {""};
    headgear[]      = {""};
	goggles[] 		= {""};
	nvgs[] 			= {""};
	magazines[] = {
		
        MAG_PRIMARY_TRACER, 2,
        GRENADE
		
    };
       
};

class CAV_Trooper : CommonBlufor {                          // Trooper
    uniform[]       = {""};
    vest[]          = {""};
    headgear[]      = {""};
	nvgs[] 			= {""};
    backpack[]      = {""};
    magazines[] = {
		
        MAG_PRIMARY_TRACER, 2,        
		GRENADE, 6
		
    };
    
};
