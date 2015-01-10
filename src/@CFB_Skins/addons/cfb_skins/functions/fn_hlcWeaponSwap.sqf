private ["_unit"];
_unit = _this select 0;
if (not local _unit) exitWith {};
if (isPlayer _unit) exitWith {};

// Allow the mission/map to override the weapon swap if necessary.
_weaponSwapData = [];
if (not isNil "CFB_WeaponSwapData_Override") then
{
	_weaponSwapData = CFB_WeaponSwapData_Override;
};

// Add support for HLC weapon overrides for rebels
if ((count _weaponSwapData == 0) && isClass(configFile >> "CfgPatches" >> "hlcweapons_aks")) then
{
	_weaponSwapData =
		[
			[
				["hgun_PDW2000_F"], // Guns to be replaced
				[ // ["gunName", "Ammo"] to replace with (randomly chosen)
					["hlc_rifle_aks74u", "hlc_30Rnd_545x39_B_AK"]
				],
				[1, 2] // [% chance to replace, ammo factor]
			],
			[
				["arifle_Mk20C_plain_F", "arifle_TRG21_F", "arifle_TRG20_F", "arifle_Mk20_F"],
				[
					["hlc_rifle_ak47", "hlc_30Rnd_762x39_b_ak"],
					["hlc_rifle_akm", "hlc_30Rnd_762x39_b_ak"],
					["hlc_rifle_ak74", "hlc_30Rnd_545x39_B_AK"],
					["hlc_rifle_aks74", "hlc_30Rnd_545x39_B_AK"],
					["hlc_rifle_aks74u", "hlc_30Rnd_545x39_B_AK"]
				],
				[0.75, 1]
			],
			[
				["LMG_Mk200_F"],
				[
					["hlc_rifle_rpk","hlc_45Rnd_762x39_m_rpk"]
				],
				[0.9, 2]
			]
		];
};

// Add support for RHS weapon overrides for rebels
if ((count _weaponSwapData == 0) && isClass(configFile >> "CfgPatches" >> "rhs_weapons")) then
{
	_weaponSwapData =
		[
			[
				["hgun_PDW2000_F"],
				[
					["rhs_weap_ak74m_folded", "rhs_30Rnd_545x39_AK_green"]
				],
				[1, 2]
			],
			[
				["arifle_Mk20C_plain_F", "arifle_TRG21_F", "arifle_TRG20_F", "arifle_Mk20_F"],
				[
					["rhs_weap_ak74m", "rhs_30Rnd_545x39_AK"],
					["rhs_weap_ak74m_folded", "rhs_30Rnd_545x39_AK"],
					["rhs_weap_ak74m_camo", "rhs_30Rnd_545x39_AK"],
					["rhs_weap_ak74m_desert", "rhs_30Rnd_545x39_AK"],
					["rhs_weap_ak74m_2mag", "rhs_30Rnd_545x39_AK"],
					["rhs_weap_ak74m_2mag_camo", "rhs_30Rnd_545x39_AK"]
				],
				[0.9, 1]
			],
			[
				["LMG_Mk200_F"],
				[
					["rhs_weap_pkp","rhs_100Rnd_762x54mmR"]
				],
				[0.75, 2]
			],
			[
				["srifle_DMR_01_F"],
				[
					["rhs_weap_svdp", "rhs_10Rnd_762x54mmR_7N1"],
					["rhs_weap_svdp_wd", "rhs_10Rnd_762x54mmR_7N1"],
					["rhs_weap_svds", "rhs_10Rnd_762x54mmR_7N1"]
				],
				[1.0, 1]
			]
		];
};

// Add support for CUP weapon overrides for rebels
if ((count _weaponSwapData == 0) && isClass(configFile >> "CfgPatches" >> "CUP_Weapons_WeaponsCore")) then
{
	_weaponSwapData =
		[
			[
				["hgun_PDW2000_F"],
				[
					["CUP_arifle_AKS74U", "CUP_30Rnd_545x39_AK_M"],
					["CUP_arifle_AKS74UN_kobra_snds", "CUP_30Rnd_545x39_AK_M"]
				],
				[1, 2]
			],
			[
				["arifle_Mk20C_plain_F", "arifle_TRG21_F", "arifle_TRG20_F", "arifle_Mk20_F"],
				[
					["CUP_arifle_AK74", "CUP_30Rnd_545x39_AK_M"],
					["CUP_arifle_AK107", "CUP_30Rnd_545x39_AK_M"],
					["CUP_arifle_AKS74", "CUP_30Rnd_545x39_AK_M"],
					["CUP_arifle_AKS74U", "CUP_30Rnd_545x39_AK_M"],
					["CUP_arifle_AKM", "CUP_30Rnd_762x39_AK47_M"],
					["CUP_arifle_AKS", "CUP_30Rnd_762x39_AK47_M"],
					["CUP_arifle_AKS_Gold", "CUP_30Rnd_762x39_AK47_M"],
					["CUP_arifle_AKS74_kobra", "CUP_30Rnd_545x39_AK_M"],
					["CUP_arifle_AKS74_pso", "CUP_30Rnd_545x39_AK_M"],
					["CUP_arifle_Sa58P", "CUP_30Rnd_Sa58_M"],
					["CUP_arifle_Sa58V", "CUP_30Rnd_Sa58_M"]
				],
				[0.9, 1]
			],
			[
				["LMG_Mk200_F"],
				[
					["CUP_lmg_PKM","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"],
					["CUP_lmg_Pecheneg_PScope","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"],
					["CUP_lmg_UK59", "CUP_50Rnd_UK59_762x54R_Tracer"]
				],
				[0.9, 2]
			]
		];
};

// If we didn't assign any data, we don't want to do anything.
if (count _weaponSwapData == 0) exitWith {};

_originalWeapon = currentWeapon _unit;
{
	_weaponsToReplace = (_x select 0);
	_replacementWeaponData = (_x select 1) call BIS_fnc_SelectRandom;
	_replacementSettings = (_x select 2);
	_gunWasMatch = false;
	{
		if (_originalWeapon == _x) exitWith
		{
			_gunWasMatch = true;
			_replacementWeapon = _replacementWeaponData select 0;
			_replacementMagazines = _replacementWeaponData select 1;
			_chanceToReplace = _replacementSettings select 0;
			_ammoFactor = _replacementSettings select 1;
			
			if (_chanceToReplace >= (random 1)) then
			{
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
				_unit addMagazines [_replacementMagazines, (_count + 1) * _ammoFactor]; // +1 for the magazine currently loaded in the weapon.
			};
		};
	} forEach _weaponsToReplace;
	
	if (_gunWasMatch) exitWith {};
} forEach _weaponSwapData;
