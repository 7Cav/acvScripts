/*
 * Author: CPL.Brostrom.A 
 * This function contain insignia selection buttons and categorys.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Example:
 * call acvScripts_fnc_initInsigniaSelections;
 */

#include "..\script_component.hpp";

params [["_object", objNull, [objNull]]];


// Make ACE Category
private _icon = "acvScripts\Data\Icon\icon_00.paa";
[_object,"cScriptInsigniaSelectionMenu","Insignia",_Icon,["ACE_MainActions"]] call FUNC(addAceCategory);
[_object,"cScriptInsigniaSelectionMisc","Misc",_Icon,["ACE_MainActions","cScriptInsigniaSelectionMenu"]] call FUNC(addAceCategory);

// Make addAction Topic.
_object addAction ["Insignia Selection", {}];

// Add the Insignia Selections 
[_object,"Remove Insignia"] call FUNC(addInsigniaSelection);
[_object,"Squad Insignia 1/1/C/1-7","11C_17_Insignia","acvScripts\Data\Insignia\1-1-C-17.paa"] call FUNC(addInsigniaSelection);
[_object,"Squad Insignia 2/1/C/1-7","21C_17_Insignia","acvScripts\Data\Insignia\2-1-C-17.paa"] call FUNC(addInsigniaSelection);
//[_object,"Squad Insignia 3/1/C/1-7","31C_17_Insignia","acvScripts\Data\Insignia\3-1-C-17.paa"] call FUNC(addInsigniaSelection);
//[_object,"Squad Insignia 4/1/C/1-7","41C_17_Insignia","acvScripts\Data\Insignia\4-1-C-17.paa"] call FUNC(addInsigniaSelection);

[_object,"Platoon Insignia 2/C/1-7","2C_17_Insignia","acvScripts\Data\Insignia\2-C-17.paa",['ACE_MainActions','cScriptInsigniaSelectionMenu']] call FUNC(addInsigniaSelection);

// 7th Cavalry Gaming Insignias
[_object,"7th Cavalry Insignia","7_Insignia","acvScripts\Data\Insignia\7.paa",['ACE_MainActions','cScriptInsigniaSelectionMenu','cScriptInsigniaSelectionMisc']] call FUNC(addInsigniaSelection);
[_object,"7th Cavalry Insignia (M81)","7_m81_Insignia","acvScripts\Data\Insignia\7_m81.paa",['ACE_MainActions','cScriptInsigniaSelectionMenu','cScriptInsigniaSelectionMisc']] call FUNC(addInsigniaSelection);
[_object,"7th Cavalry Insignia (OCP)","7_ocp_Insignia","acvScripts\Data\Insignia\7_ocp.paa",['ACE_MainActions','cScriptInsigniaSelectionMenu','cScriptInsigniaSelectionMisc']] call FUNC(addInsigniaSelection);