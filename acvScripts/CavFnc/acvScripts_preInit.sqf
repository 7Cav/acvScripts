if (getNumber (missionConfigFile >> "CfgSettings" >> "isDebugMode") == 1) then {diag_log formatText ["[acvScripts] Info: Loading preInit"];};

if (getNumber (missionConfigFile >> "CfgSettings" >> "isMissionType") == 0) then {
    
};

if (getNumber (missionConfigFile >> "CfgSettings" >> "isMissionType") == 1) then {

};

if (getNumber (missionConfigFile >> "CfgSettings" >> "isMissionType") == 2) then {

};
if (getNumber (missionConfigFile >> "CfgSettings" >> "useCustomInit") == 1) then {

};

if (getNumber (missionConfigFile >> "CfgSettings" >> "use7cavZeusModuels") == 1) then {
    call acvScripts_fnc_initModuels;
};
