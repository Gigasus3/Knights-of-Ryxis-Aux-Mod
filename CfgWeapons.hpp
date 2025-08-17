//
// CfgWeapons Includes Helmets, Power Armor, & Pauldrons
//

class Cfgweapons
{
//
//				# Helmets/Headgear #
//
	class ItemInfo;
	class HeadgearItem;
	class TIOW_MK7Helmet_UM;
	class MK7Helmet_Standard : TIOW_MK7Helmet_UM
	{
		author="Gigasus";
		displayName = "Mk 7 Helmet (Standard Marine)";
		hiddenSelectionsTextures[] =
	    {
	      "KoR\Textures\Standard_Helmet_co.paa",
	      "",
	      "KoR\Textures\Standard_Helmet_co.paa",
		};
	};

	class MK7Helmet_Test : TIOW_MK7Helmet_UM
	{
		author="Gigasus";
		displayName = "Mk 7 Helmet (Test)";
		hiddenSelectionsTextures[] =
	    {
	      "KoR\Textures\KoR_Helmet_Test_co.paa",
	      "",
	      "KoR\Textures\KoR_Helmet_Test_co.paa",
		};
	};

	class TIOW_Mk7PowerArmor_1_UM;
	class Mk7PowerArmor_Standard: TIOW_Mk7PowerArmor_1_UM
	{
		author="Gigasus";
		displayName="Mk 7 Power Armor (Standard Marine)";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\Mk7_Armor_co.paa",
			"KoR\Textures\SM_Body_co.paa"
		};
    	class ItemInfo: ItemInfo
    	{
    	uniformClass="MK7_Tact_Standard"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
    	};
	};

	class Mk7PowerArmor_Test: TIOW_Mk7PowerArmor_1_UM
	{
		author="Gigasus";
		displayName="Mk 7 Power Armor (Test)";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\MK7_Armor_test_co.paa",
			"KoR\Textures\SM_Body_co.paa"
		};
    	class ItemInfo: ItemInfo
    	{
    	uniformClass="MK7_Tact_Test"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
    	};
	};

	class Mk7PowerArmor_high: TIOW_Mk7PowerArmor_1_UM
	{
		author="Gigasus";
		displayName="Mk 7 Power Armor (High)";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\Mk7_Armor_highsat_co.paa",
			"KoR\Textures\SM_Body_co.paa"
		};
    	class ItemInfo: ItemInfo
    	{
    	uniformClass="MK7_Tact_high"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
    	};
	};

	class Mk7PowerArmor_low: TIOW_Mk7PowerArmor_1_UM
	{
		author="Gigasus";
		displayName="Mk 7 Power Armor (Low)";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\Mk7_Armor_lowsat_co.paa",
			"KoR\Textures\SM_Body_co.paa"
		};
    	class ItemInfo: ItemInfo
    	{
    	uniformClass="MK7_Tact_low"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
    	};
	};

	class TIOW_MK7Limbs_UM;
	class Mk7Limbs_Standard : TIOW_Mk7Limbs_UM
	{
		author="Gigasus";
		displayName="Mk 7 Pauldrons (Standard Marine)";
		hiddenSelectionsTextures[] =
		{
			"KoR\Textures\SM_Body_co.paa",
			"KoR\Textures\Mk7_Armor_co.paa"
		};
	};

	class Mk7Limbs_Test : TIOW_Mk7Limbs_UM
	{
		author="Gigasus";
		displayName="Mk 7 Pauldrons (Test)";
		hiddenSelectionsTextures[] =
		{
			"KoR\Textures\SM_Body_co.paa",
			"KoR\Textures\Mk7_Armor_test_co.paa"
		};
	};

	class Mk7Limbs_high : TIOW_Mk7Limbs_UM
	{
		author="Gigasus";
		displayName="Mk 7 Pauldrons (high)";
		hiddenSelectionsTextures[] =
		{
			"KoR\Textures\SM_Body_co.paa",
			"KoR\Textures\Mk7_Armor_highsat_co.paa"
		};
	};

	class Mk7Limbs_low : TIOW_Mk7Limbs_UM
	{
		author="Gigasus";
		displayName="Mk 7 Pauldrons (low)";
		hiddenSelectionsTextures[] =
		{
			"KoR\Textures\SM_Body_co.paa",
			"KoR\Textures\Mk7_Armor_lowsat_co.paa"
		};
	};
};