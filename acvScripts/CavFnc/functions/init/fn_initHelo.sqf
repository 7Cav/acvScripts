/*
 * Author: CPL.Brostrom.A 
 * This function adds the get out right and left function to all supported helos.
 *
 * Arguments:
 *
 * Example:
 * call acvScripts_fnc_initHelo;
 */
 
#include "..\script_component.hpp";

if (isServer) then {
    ["ACV_UH1H_LMG", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["ACV_UH1H_21", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["ACV_UH1H_16", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["GR_UH1D_1", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["GR_UH1H_1", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["GR_UH1H_2", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["GR_UH1H_3", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["GR_UH1H_4", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["GR_UH1H_5", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["GR_UH1H_6", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["GR_UH1H_7", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["GR_UH1N_2", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
    
    ["GR_UH1N_3", "init", {
        [(_this select 0)] call FUNC(addGetOutHelo);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
};