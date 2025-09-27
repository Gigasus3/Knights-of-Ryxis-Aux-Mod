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
	class TIOW_MK7Helmet_BR;
	class SM_Helm_Base;
	class Primaris_Helm_Main_UM_1;
	
	class MK7Helmet_Brass_Firstborn : TIOW_MK7Helmet_BR
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Gigasus";
		displayName = "[KoR] Firstborn Brass MK7";
		picture="\TIOW_SM\Icon\MK7Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK7_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\KoR_Helmet_brass_2.paa",
			"",
			"KoR\Textures\KoR_Helmet_brass_2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			uniformModel="\TIOW_SM\Marine\Model\MK7_Helmet.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\KoR_Helmet_brass_2.paa",
				"",
				"KoR\Textures\KoR_Helmet_brass_2.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
				"",
				"a3\data_f\lights\car_panels.rvmat"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
	class MK7Helmet_BBFirstborn : TIOW_MK7Helmet_BR
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Gigasus";
		displayName = "[KoR] Firstborn BB MK7";
		picture="\TIOW_SM\Icon\MK7Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK7_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\fb_helm_KoR_CO.paa",
			"",
			"KoR\Textures\fb_helm_KoR_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			uniformModel="\TIOW_SM\Marine\Model\MK7_Helmet.p3d";
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\fb_helm_KoR_CO.paa",
				"",
				"KoR\Textures\fb_helm_KoR_CO.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
				"",
				"a3\data_f\lights\car_panels.rvmat"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=35;
					passThrough=0.1;
				};
			};
		};
	};
class Primaris_Helm_KoR_1: Primaris_Helm_Main_UM_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk.10";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\prim_helm_KoR_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\prim_helm_KoR_CO.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class TIOW_Mk7PowerArmor_1_UM;
	class TIOWSpaceMarineUnderwear1_base;
	class Primaris_Dos_Base: TIOWSpaceMarineUnderwear1_base
	{
		class ItemInfo;
	};
	class Mk7PowerArmor_Firstborn: TIOW_Mk7PowerArmor_1_UM
	{
		author="Gigasus";
		displayName="[KoR] Firstborn Mk7 ";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\fb_armor_KoR_CO.paa",
			"KoR\Textures\SM_Body_co.paa"
		};
    	class ItemInfo: ItemInfo
    	{
    	uniformClass="Firstborn_SM_KoR_1"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
    	};
	};
	class Mk7PowerArmor_VetFirstborn: TIOW_Mk7PowerArmor_1_UM
	{
		author="Gigasus";
		scope=0;
		scopeArsenal=0;
		displayName="[KoR] Firstborn Mk7 ";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\fb_armor_KoR_CO.paa",
			"KoR\Textures\SM_Body_co.paa"
		};
    	class ItemInfo: ItemInfo
    	{
    	uniformClass="Firstborn_SM_KoR_2"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
    	};
	};
	class Primaris_SM_KoR_1_W: Primaris_Dos_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris MK.10";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\prim_armor_KoR_CO.paa",
			"KoR\Textures\fb_armor_KoR_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_1";
		};
	};
	class TIOW_MK7Limbs_UM;
	class DOS_Primaris_40k_Vest_Base: TIOW_Mk7Limbs_UM
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		class ItemInfo;
	};
	class Mk7Limbs_Firstborn : TIOW_Mk7Limbs_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Gigasus";
		displayName="[KoR] Firstborn Mk7 ";
		picture="\TIOW_SM\Icon\Mk4Vests_ca.paa";
		model="\TIOW_SM\Marine\Model\MK7_Vest.p3d";
		descriptionShort="Armor Level XXX";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\SM_Body_co.paa",
			"KoR\Textures\fb_armor_KoR_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\SM_Body_co.paa",
				"KoR\Textures\fb_armor_KoR_CO.paa"
			};
			uniformModel="\TIOW_SM\Marine\Model\MK7_Vest.p3d";
			containerClass="Supply140";
			mass=5;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=1500;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=1000;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=1500;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=1500;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=1000;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=1000;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=1000;
					passThrough=0.1;
				};
			};
		};
	};
	class Primaris_Vest_40k_KoR_1: DOS_Primaris_40k_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk.10";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\prim_armor_KoR_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\prim_armor_KoR_CO.paa"
			};
		};
	};
};