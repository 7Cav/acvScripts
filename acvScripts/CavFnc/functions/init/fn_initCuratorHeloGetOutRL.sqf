/*
 * Author: SSG.Argus.J
 * This fuction is executed to give all helicopters on curator placement to aply FRIES to all helos.
 *
 * Arguments:
 *
 * Example:
 * call acvScripts_fnc_initCuratorHeloGetOutRL;
 */

#include "..\script_component.hpp";
{
    addHeloGetOut = _x addEventHandler ["CuratorObjectPlaced", {
        _helo = ["ACV_UH1H_LMG","ACV_UH1H_21","ACV_UH1H_16","GR_UH1D_1","GR_UH1H_1","GR_UH1H_2","GR_UH1H_3","GR_UH1H_4","GR_UH1H_5","GR_UH1H_6","GR_UH1H_7","GR_UH1N_2","GR_UH1N_3"];
        _entity = _this select 1;
        if ((typeOf _entity) in _helo) then {
            [_entity] call FUNC(addGetOutHelo);
        };
    }];
} forEach allCurators;

