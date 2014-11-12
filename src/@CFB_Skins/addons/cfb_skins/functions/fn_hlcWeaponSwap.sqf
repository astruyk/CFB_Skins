private ["_unit"];
_unit = _this select 0;
if (not local _unit) exitWith {};
if (not isClass(configFile >> "CfgPatches" >> "hlcweapons_aks")) exitWith {};

if (isNil "JTF2_HLC_WeaponSwapData") then
{
	JTF2_HLC_WeaponSwapData =
		[
			[
				["hgun_PDW2000_F"],
				[
					["hlc_rifle_aks74u", "hlc_30Rnd_545x39_B_AK"]
				]
			],
			[
				["arifle_Mk20C_plain_F", "arifle_TRG21_F", "arifle_TRG20_F", "arifle_Mk20_F"],
				[
					["hlc_rifle_ak47", "hlc_30Rnd_762x39_b_ak"],
					["hlc_rifle_akm", "hlc_30Rnd_762x39_b_ak"],
					["hlc_rifle_ak74", "hlc_30Rnd_545x39_B_AK"],
					["hlc_rifle_aks74", "hlc_30Rnd_545x39_B_AK"],
					["hlc_rifle_aks74u", "hlc_30Rnd_545x39_B_AK"]
				] 
			],
			[
				["LMG_Mk200_F"],
				[
					["hlc_rifle_rpk","hlc_45Rnd_762x39_m_rpk"]
				]
			]
		];
};

_originalWeapon = currentWeapon _unit;
{
	_weaponsToReplace = (_x select 0);
	_replacementWeaponData = (_x select 1) call BIS_fnc_SelectRandom;
	_performedReplace = false;
	{
		if (_originalWeapon == _x) exitWith
		{
			_replacementWeapon = _replacementWeaponData select 0;
			_replacementMagazines = _replacementWeaponData select 1;

			// Replace the weapon itself.
			_unit removeWeapon _originalWeapon;
			_unit addWeaponGlobal _replacementWeapon;

			// Count the number of magazines compatible with the original weapon.
			_originalWeaponCompatibleAmmo = getArray (configFile >> "CfgWeapons" >> _originalWeapon >> "magazines");
			_magazines = magazines _unit;
			_count = 0;
			{
				if (_x in _originalWeaponCompatibleAmmo) then
				{
					_count = _count + 1;
				};
			} forEach _magazines;
			
			// Remove the old magazines
			{
				_unit removeMagazines _x;
			} forEach _originalWeaponCompatibleAmmo;
			
			// Add the new magazines
			_unit addMagazines [_replacementMagazines, _count + 1]; // +1 for the magazine currently loaded in the weapon.
			
			_performedReplace = true;
		};
	} forEach _weaponsToReplace;
	
	if (_performedReplace) exitWith {};
} forEach JTF2_HLC_WeaponSwapData;
