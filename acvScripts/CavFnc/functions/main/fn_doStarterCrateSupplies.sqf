/*
 * Author: CPL.Brostrom.A 
 * This function changes the inventory of a given object and gives it a new.
 *
 * Arguments:
 * 0: Crate <OBJECT>
 * 1: Scale cargo Ammount <NUMBER> (Default: 1)
 *
 * Example:
 * [this,0.5] call acvScripts_fnc_doStarterCrateSupplies;
 * [this,1] call acvScripts_fnc_doStarterCrateSupplies;
 */

#include "..\script_component.hpp";

if (!isServer) exitWith {};

params [["_crate", objNull, [objNull]],["_quaScale",1]];

clearweaponcargoGlobal _crate;
clearmagazinecargoGlobal _crate;
clearitemcargoGlobal _crate;
clearbackpackcargoGlobal _crate;

//================== RADIOS ==================\\

// _crate addItemCargoGlobal ["tf_rf7800str",(_quaScale * 150)];
// _crate addBackpackCargoGlobal ["tf_rt1523g_rhs",(_quaScale * 25)];

//================== WEAPONS ==================\\

// _crate addWeaponCargoGlobal ["rhs_weap_m4a1_carryhandle",(_quaScale * 25)];


//================== AMMO ==================\\

// _crate addMagazineCargoGlobal ["magClassname",(_quaScale * 250)];

//================== GRENADES ==================\\

// _crate addMagazineCargoGlobal ["Chemlight_Red",(_quaScale * 250)];

//================== EXPLOSIVES ==================\\

// _crate addMagazineCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",(_quaScale * 50)];

//================== ITEMS ==================\\

// _crate addItemCargoGlobal ["Toolkit",(_quaScale * 50)];

//================== MEDICAL ==================\\

_crate addItemCargoGlobal ["ACE_EarPlugs",(_quaScale * 250)];

_crate addItemCargoGlobal ["ACE_FieldDressing",(_quaScale * 250)];
_crate addItemCargoGlobal ["ACE_packingBandage",(_quaScale * 250)];
_crate addItemCargoGlobal ["ACE_elasticBandage",(_quaScale * 250)];
_crate addItemCargoGlobal ["ACE_quikclot",(_quaScale * 250)];

_crate addItemCargoGlobal ["ACE_tourniquet",(_quaScale * 250)];

_crate addItemCargoGlobal ["ACE_personalAidKit",(_quaScale * 250)];
_crate addItemCargoGlobal ["ACE_surgicalKit",(_quaScale * 250)];

_crate addItemCargoGlobal ["ACE_bloodIV",(_quaScale * 250)];
_crate addItemCargoGlobal ["ACE_bloodIV_500",(_quaScale * 250)];
_crate addItemCargoGlobal ["ACE_salineIV",(_quaScale * 250)];
_crate addItemCargoGlobal ["ACE_salineIV_500",(_quaScale * 250)];

_crate addItemCargoGlobal ["ACE_morphine",(_quaScale * 250)];
_crate addItemCargoGlobal ["ACE_epinephrine",(_quaScale * 250)];
_crate addItemCargoGlobal ["ACE_atropine",(_quaScale * 250)];

_crate addItemCargoGlobal ["ACE_bodyBag",(_quaScale * 250)];


//================== BACKPACKS ==================\\

// _crate addBackpackCargoGlobal ["rhsusf_assault_eagleaiii_ocp",(_quaScale * 15)];
// _crate addBackpackCargoGlobal ["B_Mortar_01_support_F",(_quaScale * 5)];
// _crate addBackpackCargoGlobal ["B_Mortar_01_weapon_F",(_quaScale * 5)];
