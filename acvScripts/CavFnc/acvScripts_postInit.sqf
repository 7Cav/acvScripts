if (getNumber (missionConfigFile >> "CfgSettings" >> "isDebugMode") == 1) then {diag_log formatText ["[acvScripts] Info: Loading postInit"];};

// Add diary records on mission start
if (getNumber (missionConfigFile >> "CfgSettings" >> "showDiaryRecords") == 1) then {
    call acvScripts_fnc_initDocuments;
};

if (getNumber (missionConfigFile >> "CfgSettings" >> "useCustomInit") == 1) then {
    // Change inventory content of supply crates on mission start.
    if (getNumber (missionConfigFile >> "CfgSettings" >> "useScriptVehicleInventory") == 1) then {
        call acvScripts_fnc_initVehicle;
    };
    // Change inventory content of vehicle on mission start.
    if (getNumber (missionConfigFile >> "CfgSettings" >> "useScriptSupplyInventory") == 1) then {
        call acvScripts_fnc_initSupply;
    };
    // Add a Get Out Right and Left on all helicopters on Mission Start and on zeus spawned items.
    if (getNumber (missionConfigFile >> "CfgSettings" >> "useHeloGetOutRL") == 1) then {
        call acvScripts_fnc_initHelo;
        call acvScripts_fnc_initCuratorHeloGetOutRL;
    };
};

if (getNumber (missionConfigFile >> "CfgSettings" >> "isMissionType") == 0) then {
    if (getNumber (missionConfigFile >> "CfgSettings" >> "useStartHint") == 1) then {
        private _setCustomHintTopic = getText (missionConfigFile >> "CfgSettings" >> "setCustomHintTopic");
        private _setCustomHintText = getText (missionConfigFile >> "CfgSettings" >> "setCustomHintText");
        [_setCustomHintTopic, _setCustomHintText, 15] call acvScripts_fnc_initCustomStartHint;
    };
};

if (getNumber (missionConfigFile >> "CfgSettings" >> "isMissionType") == 1) then {
// Set time and run the "Red Light" start script.
    if (getNumber (missionConfigFile >> "CfgSettings" >> "useStartHint") == 1) then {
        private _setRedLightTime = getNumber (missionConfigFile >> "CfgSettings" >> "setRedLightTime");
        [_setRedLightTime] call acvScripts_fnc_initMissionStartHint;
    };
};

if (getNumber (missionConfigFile >> "CfgSettings" >> "isMissionType") == 2) then {
// Set time and run Training Mission start script.
    if (getNumber (missionConfigFile >> "CfgSettings" >> "useStartHint") == 1) then {
        private _setTrainingHintTime = getNumber (missionConfigFile >> "CfgSettings" >> "setTrainingHintTime");
        [_setTrainingHintTime] call acvScripts_fnc_initTrainingStartHint;
    };
};
