/*
 * Author: CPL.Brostrom.A 
 * This refits a given vehicle with a more Cav suited supplies equipment.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Scale cargo ammount <NUMBER> (Default: 1)
 *
 * Example:
 * [this] call acvScripts_fnc_initVehicle;
 * [this,1] call acvScripts_fnc_initVehicle;
 */
 
#include "..\script_component.hpp";

if (isServer) then {
    /*["AllVehicles", "init", {
        [(_this select 0)] call FUNC(initVehicle);
    }, nil, nil, true] call CBA_fnc_addClassEventHandler; */

    //UH60M
    /*["RHS_UH60_Base", "init", {
        //[(_this select 0)] call FUNC(addGetOutUH60);
        clearweaponcargoGlobal (_this select 0);
        clearmagazinecargoGlobal (_this select 0);
        clearitemcargoGlobal (_this select 0);
        clearbackpackcargoGlobal (_this select 0);
        (_this select 0) addItemCargoGlobal ["ACE_EarPlugs",3];
        (_this select 0) addMagazineCargoGlobal [QUOTE(_GRENADE_SMOKE),2];
        (_this select 0) addMagazineCargoGlobal [QUOTE(_GRENADE_SMOKE_BLUE),1];
        (_this select 0) addMagazineCargoGlobal ["Chemlight_Blue",3];
        (_this select 0) addMagazineCargoGlobal ["Chemlight_Red",3];
        (_this select 0) addItemCargoGlobal ["Toolkit",1];
    }, nil, nil, true] call CBA_fnc_addClassEventHandler; */
};