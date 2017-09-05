/*           RULES            */
    
    enableSaving [false, false];
    tawvd_disablenone = true;

    if (getNumber (missionConfigFile >> "CfgSettings" >> "aiSystemDifficulty") == 0) then {
        {
            _x setSkill ["aimingspeed",     0.420];
            _x setSkill ["aimingaccuracy",  0.338];
            _x setSkill ["aimingshake",     0.360];
            _x setSkill ["spottime",        0.420];
            _x setSkill ["spotdistance",    0.700];
            _x setSkill ["commanding",      1.0];
            _x setSkill ["general",         1.0];
        } forEach allUnits;
    };
    if (getNumber (missionConfigFile >> "CfgSettings" >> "aiSystemDifficulty") == 1) then {
        {
            _x setSkill ["aimingspeed",     0.420];
            _x setSkill ["aimingaccuracy",  0.338];
            _x setSkill ["aimingshake",     0.360];
            _x setSkill ["spottime",        0.420];
            _x setSkill ["spotdistance",    1.000];
            _x setSkill ["commanding",      1.0];
            _x setSkill ["general",         1.0];
        } forEach allUnits;
    };
    if (getNumber (missionConfigFile >> "CfgSettings" >> "aiSystemDifficulty") == 2) then {
        { 
            _x setSkill ["aimingspeed",     0.220]; 
            _x setSkill ["aimingaccuracy",  0.100]; 
            _x setSkill ["aimingshake",     0.280]; 
            _x setSkill ["spottime",        0.320]; 
            _x setSkill ["spotdistance",    0.500]; 
            _x setSkill ["commanding",      1.0]; 
            _x setSkill ["general",         1.0]; 
        } forEach allUnits;
    };
    
/*           ACE            */

    ACE_maxWeightCarry = 7500;
    ACE_maxWeightDrag = 10000;
    
/*           TFAR            */
    
    tf_no_auto_long_range_radio                 = true;
    TF_give_personal_radio_to_regular_soldier   = false;
    TF_give_microdagr_to_soldier                = false;
    TF_defaultWestPersonalRadio                 = "";
    TF_defaultWestRiflemanRadio                 = "";
    TF_defaultWestAirborneRadio                 = "";
    TF_defaultWestBackpack                      = "tf_rt1523g_big_rhs";
    
    TF_terrain_interception_coefficient         = 7.0; //Coefficient defining the level of radio signal interruption caused by terrain.

player setVariable ["tf_receivingDistanceMultiplicator", 2]; // A multiplier for increasing, or lowering the distance from transmitter to receiver (player).

player setVariable ["tf_sendingDistanceMultiplicator", 0.5]; // A multiplier for increasing or lowering the range of transmission.

/*           MODUELS            */
