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
	class TIOW_MK7Helmet_BR;
	class SM_Helm_Base;
	class Primaris_Helm_Main_WS_1;
	
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
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
			"",
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk7 Brass";
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
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
				"",
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
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
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
			"",
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk7";
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
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
				"",
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
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
class MK7Helmet_Firstborn_VET : TIOW_MK7Helmet_BR
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Gigasus";
		displayName = "[KoR] Firstborn Veteran MK7";
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
			"KoR\Textures\helmets\fb_helm_KoR_VET_CO.paa",
			"",
			"KoR\Textures\helmets\fb_helm_KoR_VET_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk7 Vet";
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
				"KoR\Textures\helmets\fb_helm_KoR_VET_CO.paa",
				"",
				"KoR\Textures\helmets\fb_helm_KoR_VET_CO.paa"
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

	class KoR_MK7KnightHelmet_Brass: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk7 Knight Helmet Brass";
		picture="\TIOW_SM\Icon\MK7KnightHelmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK7_KnightHelmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
			"",
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk7 Knight Brass";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK7_KnightHelmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
				"",
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
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

	class KoR_MK7KnightHelmet: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk7 Knight Helmet";
		picture="\TIOW_SM\Icon\MK7KnightHelmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK7_KnightHelmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
			"",
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk7 Knight";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK7_KnightHelmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
				"",
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
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

	class MK6Helmet_KoR: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk6 Helmet";
		picture="\TIOW_SM\Icon\MK6Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK6_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
			"",
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk6";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK6_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
				"",
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
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

	class MK5Helmet_KoR: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk5 Helmet";
		picture="\TIOW_SM\Icon\MK5Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK5_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
			"",
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk5";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK5_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
				"",
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
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

	class MK4Helmet_KoR: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk4 Helmet";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK4_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
			"",
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk4";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK4_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
				"",
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
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

	class MK3Helmet_KoR: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk3 Helmet";
		picture="\TIOW_SM\Icon\MK3Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK3_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
			"",
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk3";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK3_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
				"",
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
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

	class MK3Helmet_KoR_Brass: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk3 Helmet Brass";
		picture="\TIOW_SM\Icon\MK3Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK3_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
			"",
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk3 Brass";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK3_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
				"",
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
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

	class MK2Helmet_KoR: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk2 Helmet";
		picture="\TIOW_SM\Icon\MK2Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK2_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
			"",
			"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk2";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK2_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa",
				"",
				"KoR\Textures\helmets\fb_helm_KoR_CO.paa"
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

	class MK2Helmet_KoR_Brass: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk2 Helmet Brass";
		picture="\TIOW_SM\Icon\MK2Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK2_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
			"",
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk2 Brass";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK2_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
				"",
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
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

	class MK6Helmet_KoR_Brass: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk6 Helmet Brass";
		picture="\TIOW_SM\Icon\MK6Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK6_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
			"",
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk6 Brass";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK6_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
				"",
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
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

	class MK5Helmet_KoR_Brass: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk5 Helmet Brass";
		picture="\TIOW_SM\Icon\MK5Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK5_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
			"",
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk5 Brass";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK5_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
				"",
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
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

	class MK4Helmet_KoR_Brass: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk4 Helmet Brass";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\MK4_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
			"",
			"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Helmets";
			Firstborn_Helmets="Mk4 Brass";
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\MK4_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa",
				"",
				"KoR\Textures\helmets\KoR_Helmet_brass_2.paa"
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

//Primaris
class Primaris_Helm_KoR_Stone: Primaris_Helm_Main_WS_1
	{
		scope=0;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="[KoR] Primaris Stone Mk6";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\prim_helm_KoR_Stone_CO.paa",
			"KoR\Textures\helmets\Eyes_kor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Custom_Helmets="Stone";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\prim_helm_KoR_Stone_CO.paa",
				"KoR\Textures\helmets\Eyes_kor.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};

//Standard
class Primaris_Helm_KoR_1: Primaris_Helm_Main_WS_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk10";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\prim_helm_KoR_CO.paa",
			"KoR\Textures\helmets\Eyes_kor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Helmets="Mk10";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\prim_helm_KoR_CO.paa",
				"KoR\Textures\helmets\Eyes_kor.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class Primaris_Helm_KoR_2: Primaris_Helm_KoR_1
	{
		displayName="[KoR] Primaris Mk6";
		model="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Helmets="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		};
	};
	class Primaris_Helm_KoR_3: Primaris_Helm_KoR_1
	{
		displayName="[KoR] Primaris Mk7";
		model="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Helmets="Mk7";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		};
	};
	class Primaris_Helm_KoR_4: Primaris_Helm_KoR_1
	{
		displayName="[KoR] Primaris Bladeguard";
		model="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Helmets="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		};
	};
	class Primaris_Helm_KoR_5: Primaris_Helm_KoR_1
	{
		displayName="[KoR] Primaris Mk10 Reinforced";
		model="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Helmets="Mk10 Reinforced";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		};
	};
	class Primaris_Helm_KoR_6: Primaris_Helm_KoR_1
	{
		displayName="[KoR] Primaris Reiver";
		model="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Helmets="Reiver";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		};
	};
	class Primaris_Helm_KoR_7: Primaris_Helm_KoR_1
	{
		displayName="[KoR] Primaris Infiltrator";
		model="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Helmets="Infiltrator";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		};
	};

//Veteran

	class Primaris_Helm_KoR_VET: Primaris_Helm_Main_WS_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Veteran Mk10";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\prim_helm_KoR_VET_CO.paa",
			"KoR\Textures\helmets\Eyes_kor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Vet_Helmets="Mk10";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\prim_helm_KoR_VET_CO.paa",
				"KoR\Textures\helmets\Eyes_kor.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class Primaris_Helm_KoR_Mk6_Vet: Primaris_Helm_KoR_VET
	{
		displayName="[KoR] Primaris Mk6 Veteran";
		model="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Vet_Helmets="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		};
	};
	class Primaris_Helm_KoR_Mk7_Vet: Primaris_Helm_KoR_VET
	{
		displayName="[KoR] Primaris Mk7 Veteran";
		model="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Vet_Helmets="Mk7";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		};
	};
	class Primaris_Helm_KoR_BG_Vet: Primaris_Helm_KoR_VET
	{
		displayName="[KoR] Primaris Bladeguard Veteran";
		model="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Vet_Helmets="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		};
	};
	class Primaris_Helm_KoR_RF_Vet: Primaris_Helm_KoR_VET
	{
		displayName="[KoR] Primaris Mk10 Reinforced Veteran";
		model="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Vet_Helmets="Mk10 Reinforced";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		};
	};
	class Primaris_Helm_KoR_RV_Vet: Primaris_Helm_KoR_VET
	{
		displayName="[KoR] Primaris Reiver Veteran";
		model="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Vet_Helmets="Reiver";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		};
	};
	class Primaris_Helm_KoR_Infil_Vet: Primaris_Helm_KoR_VET
	{
		displayName="[KoR] Primaris Infiltrator Veteran";
		model="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Vet_Helmets="Infiltrator";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		};
	};

//Sergeant
	class Primaris_Helm_KoR_SGT: Primaris_Helm_Main_WS_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk10 Sergeant";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\prim_helm_Serg_KoR.paa",
			"KoR\Textures\helmets\Eyes_kor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_SGT_Helmets="Mk10";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\prim_helm_Serg_KoR.paa",
				"KoR\Textures\helmets\Eyes_kor.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class Primaris_Helm_KoR_Mk6_SGT: Primaris_Helm_KoR_SGT
	{
		displayName="[KoR] Primaris Mk6 Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_SGT_Helmets="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		};
	};
	class Primaris_Helm_KoR_Mk7_SGT: Primaris_Helm_KoR_SGT
	{
		displayName="[KoR] Primaris Mk7 Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_SGT_Helmets="Mk7";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		};
	};
	class Primaris_Helm_KoR_BG_SGT: Primaris_Helm_KoR_SGT
	{
		displayName="[KoR] Primaris Bladeguard Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_SGT_Helmets="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		};
	};
	class Primaris_Helm_KoR_RF_SGT: Primaris_Helm_KoR_SGT
	{
		displayName="[KoR] Primaris Mk10 Reinforced Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_SGT_Helmets="Mk10 Reinforced";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		};
	};
	class Primaris_Helm_KoR_RV_SGT: Primaris_Helm_KoR_SGT
	{
		displayName="[KoR] Primaris Reiver Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_SGT_Helmets="Reiver";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		};
	};
	class Primaris_Helm_KoR_Infil_SGT: Primaris_Helm_KoR_SGT
	{
		displayName="[KoR] Primaris Infiltrator Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_SGT_Helmets="Infiltrator";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		};
	};

//Veteran Sergeant

	class Primaris_Helm_KoR_VETSGT: Primaris_Helm_Main_WS_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk10 Vet-Sergeant";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\prim_helm_vetSerg_KoR.paa",
			"KoR\Textures\helmets\Eyes_kor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_VetSGT_Helmets="Mk10";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\prim_helm_vetSerg_KoR.paa",
				"KoR\Textures\helmets\Eyes_kor.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class Primaris_Helm_KoR_Mk6_VetSGT: Primaris_Helm_KoR_VETSGT
	{
		displayName="[KoR] Primaris Mk6 Vet-Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_VetSGT_Helmets="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		};
	};
	class Primaris_Helm_KoR_Mk7_VetSGT: Primaris_Helm_KoR_VETSGT
	{
		displayName="[KoR] Primaris Mk7 Vet-Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_VetSGT_Helmets="Mk7";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		};
	};
	class Primaris_Helm_KoR_BG_VetSGT: Primaris_Helm_KoR_VETSGT
	{
		displayName="[KoR] Primaris Bladeguard Vet-Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_VetSGT_Helmets="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		};
	};
	class Primaris_Helm_KoR_RF_VetSGT: Primaris_Helm_KoR_VETSGT
	{
		displayName="[KoR] Primaris Mk10 Reinforced Vet-Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_VetSGT_Helmets="Mk10 Reinforced";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		};
	};
	class Primaris_Helm_KoR_RV_VetSGT: Primaris_Helm_KoR_VETSGT
	{
		displayName="[KoR] Primaris Reiver Vet-Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_VetSGT_Helmets="Reiver";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		};
	};
	class Primaris_Helm_KoR_Infil_VetSGT: Primaris_Helm_KoR_VETSGT
	{
		displayName="[KoR] Primaris Infiltrator Vet-Sergeant";
		model="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_VetSGT_Helmets="Infiltrator";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		};
	};

//Lieutenant
class Primaris_Helm_KoR_LT: Primaris_Helm_Main_WS_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk10 Lieutenant";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\prim_helm_LT_KoR.paa",
			"KoR\Textures\helmets\Eyes_kor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_LT_Helmets="Mk10";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\prim_helm_LT_KoR.paa",
				"KoR\Textures\helmets\Eyes_kor.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class Primaris_Helm_KoR_Mk6_LT: Primaris_Helm_KoR_LT
	{
		displayName="[KoR] Primaris Mk6 Lieutenant";
		model="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_LT_Helmets="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		};
	};
	class Primaris_Helm_KoR_Mk7_LT: Primaris_Helm_KoR_LT
	{
		displayName="[KoR] Primaris Mk7 Lieutenant";
		model="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_LT_Helmets="Mk7";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		};
	};
	class Primaris_Helm_KoR_BG_LT: Primaris_Helm_KoR_LT
	{
		displayName="[KoR] Primaris Bladeguard Lieutenant";
		model="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_LT_Helmets="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		};
	};
	class Primaris_Helm_KoR_RF_LT: Primaris_Helm_KoR_LT
	{
		displayName="[KoR] Primaris Mk10 Reinforced Lieutenant";
		model="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_LT_Helmets="Mk10 Reinforced";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		};
	};
	class Primaris_Helm_KoR_RV_LT: Primaris_Helm_KoR_LT
	{
		displayName="[KoR] Primaris Reiver Lieutenant";
		model="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_LT_Helmets="Reiver";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		};
	};
	class Primaris_Helm_KoR_Infil_LT: Primaris_Helm_KoR_LT
	{
		displayName="[KoR] Primaris Infiltrator Lieutenant";
		model="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_LT_Helmets="Infiltrator";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		};
	};

//Veteran Laurels
class Primaris_Helm_KoR_VetLaurels: Primaris_Helm_Main_WS_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk10 Veteran Laurels";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Mk10.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\prim_helm_KoR_VET_Laruels_CO.paa",
			"KoR\Textures\helmets\Eyes_kor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_Vet_Laurels_Helmets="Mk10";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\prim_helm_KoR_VET_Laruels_CO.paa",
				"KoR\Textures\helmets\Eyes_kor.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class Primaris_Helm_KoR_Mk6_VetLaurels: Primaris_Helm_KoR_VetLaurels
	{
		displayName="[KoR] Primaris Mk6 Veteran Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_Vet_Laurels_Helmets="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		};
	};
	class Primaris_Helm_KoR_Mk7_VetLaurels: Primaris_Helm_KoR_VetLaurels
	{
		displayName="[KoR] Primaris Mk7 Veteran Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_Vet_Laurels_Helmets="Mk7";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		};
	};
	class Primaris_Helm_KoR_BG_VetLaurels: Primaris_Helm_KoR_VetLaurels
	{
		displayName="[KoR] Primaris Bladeguard Veteran Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_Vet_Laurels_Helmets="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		};
	};
	class Primaris_Helm_KoR_RF_VetLaurels: Primaris_Helm_KoR_VetLaurels
	{
		displayName="[KoR] Primaris Mk10 Reinforced Veteran Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_Vet_Laurels_Helmets="Mk10 Reinforced";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		};
	};
	class Primaris_Helm_KoR_RV_VetLaurels: Primaris_Helm_KoR_VetLaurels
	{
		displayName="[KoR] Primaris Reiver Veteran Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_Vet_Laurels_Helmets="Reiver";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		};
	};
	class Primaris_Helm_KoR_Infil_VetLaurels: Primaris_Helm_KoR_VetLaurels
	{
		displayName="[KoR] Primaris Infiltrator Veteran Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_Vet_Laurels_Helmets="Infiltrator";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		};
	};

//Sergeant Laurels
class Primaris_Helm_KoR_SGTLaurels: Primaris_Helm_Main_WS_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk10 Sergeant Laurels";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Mk10.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\prim_helm_SGT_Laruels_KoR.paa",
			"KoR\Textures\helmets\Eyes_kor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_SGT_Laurels_Helmets="Mk10";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\prim_helm_SGT_Laruels_KoR.paa",
				"KoR\Textures\helmets\Eyes_kor.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class Primaris_Helm_KoR_Mk6_SGTLaurels: Primaris_Helm_KoR_SGTLaurels
	{
		displayName="[KoR] Primaris Mk6 Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_SGT_Laurels_Helmets="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		};
	};
	class Primaris_Helm_KoR_Mk7_SGTLaurels: Primaris_Helm_KoR_SGTLaurels
	{
		displayName="[KoR] Primaris Mk7 Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_SGT_Laurels_Helmets="Mk7";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		};
	};
	class Primaris_Helm_KoR_BG_SGTLaurels: Primaris_Helm_KoR_SGTLaurels
	{
		displayName="[KoR] Primaris Bladeguard Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_SGT_Laurels_Helmets="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		};
	};
	class Primaris_Helm_KoR_RF_SGTLaurels: Primaris_Helm_KoR_SGTLaurels
	{
		displayName="[KoR] Primaris Mk10 Reinforced Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_SGT_Laurels_Helmets="Mk10 Reinforced";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		};
	};
	class Primaris_Helm_KoR_RV_SGTLaurels: Primaris_Helm_KoR_SGTLaurels
	{
		displayName="[KoR] Primaris Reiver Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_SGT_Laurels_Helmets="Reiver";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		};
	};
	class Primaris_Helm_KoR_Infil_SGTLaurels: Primaris_Helm_KoR_SGTLaurels
	{
		displayName="[KoR] Primaris Infiltrator Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_SGT_Laurels_Helmets="Infiltrator";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		};
	};

//Veteran Sergeant Laurels
class Primaris_Helm_KoR_VetSGTLaurels: Primaris_Helm_Main_WS_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk10 Vet-Sergeant Laurels";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Mk10.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\prim_helm_VetSGT_Laruels_KoR.paa",
			"KoR\Textures\helmets\Eyes_kor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_VetSGT_Laurels_Helmets="Mk10";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\prim_helm_VetSGT_Laruels_KoR.paa",
				"KoR\Textures\helmets\Eyes_kor.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class Primaris_Helm_KoR_Mk6_VetSGTLaurels: Primaris_Helm_KoR_VetSGTLaurels
	{
		displayName="[KoR] Primaris Mk6 Vet-Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_VetSGT_Laurels_Helmets="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		};
	};
	class Primaris_Helm_KoR_Mk7_VetSGTLaurels: Primaris_Helm_KoR_VetSGTLaurels
	{
		displayName="[KoR] Primaris Mk7 Vet-Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_VetSGT_Laurels_Helmets="Mk7";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		};
	};
	class Primaris_Helm_KoR_BG_VetSGTLaurels: Primaris_Helm_KoR_VetSGTLaurels
	{
		displayName="[KoR] Primaris Bladeguard Vet-Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_VetSGT_Laurels_Helmets="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		};
	};
	class Primaris_Helm_KoR_RF_VetSGTLaurels: Primaris_Helm_KoR_VetSGTLaurels
	{
		displayName="[KoR] Primaris Mk10 Reinforced Vet-Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_VetSGT_Laurels_Helmets="Mk10 Reinforced";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		};
	};
	class Primaris_Helm_KoR_RV_VetSGTLaurels: Primaris_Helm_KoR_VetSGTLaurels
	{
		displayName="[KoR] Primaris Reiver Vet-Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_VetSGT_Laurels_Helmets="Reiver";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		};
	};
	class Primaris_Helm_KoR_Infil_VetSGTLaurels: Primaris_Helm_KoR_VetSGTLaurels
	{
		displayName="[KoR] Primaris Infiltrator Vet-Sergeant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_VetSGT_Laurels_Helmets="Infiltrator";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		};
	};

//Lieutenant Laurels
class Primaris_Helm_KoR_LTLaurels: Primaris_Helm_Main_WS_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk10 Lieutenant Laurels";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Mk10.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\helmets\prim_helm_LT_Laruels_KoR.paa",
			"KoR\Textures\helmets\Eyes_kor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_LT_Laurels_Helmets="Mk10";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\helmets\prim_helm_LT_Laruels_KoR.paa",
				"KoR\Textures\helmets\Eyes_kor.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class Primaris_Helm_KoR_Mk6_LTLaurels: Primaris_Helm_KoR_LTLaurels
	{
		displayName="[KoR] Primaris Mk6 Lieutenant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_LT_Laurels_Helmets="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk6.p3d";
		};
	};
	class Primaris_Helm_KoR_Mk7_LTLaurels: Primaris_Helm_KoR_LTLaurels
	{
		displayName="[KoR] Primaris Mk7 Lieutenant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_LT_Laurels_Helmets="Mk7";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Mk7.p3d";
		};
	};
	class Primaris_Helm_KoR_BG_LTLaurels: Primaris_Helm_KoR_LTLaurels
	{
		displayName="[KoR] Primaris Bladeguard Lieutenant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_LT_Laurels_Helmets="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Bladeguard.p3d";
		};
	};
	class Primaris_Helm_KoR_RF_LTLaurels: Primaris_Helm_KoR_LTLaurels
	{
		displayName="[KoR] Primaris Mk10 Reinforced Lieutenant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_LT_Laurels_Helmets="Mk10 Reinforced";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reinforced.p3d";
		};
	};
	class Primaris_Helm_KoR_RV_LTLaurels: Primaris_Helm_KoR_LTLaurels
	{
		displayName="[KoR] Primaris Reiver Lieutenant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_LT_Laurels_Helmets="Reiver";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Reiver.p3d";
		};
	};
	class Primaris_Helm_KoR_Infil_LTLaurels: Primaris_Helm_KoR_LTLaurels
	{
		displayName="[KoR] Primaris Infiltrator Lieutenant Laurels";
		model="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_HonourHelmets";
			Primaris_LT_Laurels_Helmets="Infiltrator";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		};
	};

// Power Armour
	class TIOW_Mk7PowerArmor_1_UM;
	class TIOW_Mk7PowerArmorImperialis_1_UM;
	class TIOW_Mk8PowerArmor_1_UM;
	class TIOW_Mk6PowerArmor_1_UM;
	class TIOW_Mk5PowerArmor_1_UM;
	class TIOW_Mk4PowerArmor_1_UM;
	class TIOW_Mk3PowerArmor_1_UM;
	class TIOW_Mk2PowerArmor_1_UM;
	class TIOWSpaceMarineUnderwear1_base;
	class WBK_DT_DOS_Redux_U;
	class WBK_DT_DOS_Redux_Ven;
	class Primaris_Dos_Base: TIOWSpaceMarineUnderwear1_base
	{
		class ItemInfo;
	};
	class Mk7PowerArmor_Firstborn_1: TIOW_Mk7PowerArmor_1_UM
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Firstborn Mk7";
		picture="\TIOW_SM\Icon\MK7Uniform_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\fb_armor_KoR_CO.paa",
			"KoR\Textures\body\SM_Body_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Firstborn_Armour="Mk7";
		};
    	class ItemInfo: ItemInfo
    	{
    	uniformClass="Firstborn_SM_KoR_1"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
    	};
	};
	class Mk3PowerArmor_Firstborn: TIOW_Mk3PowerArmor_1_UM
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Firstborn Mk3";
		picture="\TIOW_SM\Icon\MK3Uniform_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\fb_armor_KoR_CO.paa",
			"KoR\Textures\body\SM_Body_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Firstborn_Armour="Mk3";
		};
    	class ItemInfo: ItemInfo
    	{
    	uniformClass="Firstborn_SM_KoR_3"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
    	};
	};
	class Mk7PowerArmorImperialis_KoR: TIOW_Mk7PowerArmorImperialis_1_UM
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Mk7 Power Armor Imperialis";
		picture="\TIOW_SM\Icon\MK7UniformImperialis_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\fb_armor_KoR_CO.paa",
			"KoR\Textures\body\SM_Body_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Firstborn_Armour="Mk7 Imperalis";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Firstborn_SM_KoR_Imp";
		};
	};
	class Mk8PowerArmor_KoR: TIOW_Mk8PowerArmor_1_UM
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Mk8 Power Armor";
		picture="\TIOW_SM\Icon\MK8Uniform_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\fb_armor_KoR_CO.paa",
			"KoR\Textures\body\SM_Body_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Firstborn_Armour="Mk8";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Firstborn_SM_KoR_8";
		};
	};
	class Mk6PowerArmor_KoR: TIOW_Mk6PowerArmor_1_UM
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Mk6 Power Armor";
		picture="\TIOW_SM\Icon\MK6Uniform_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\fb_armor_KoR_CO.paa",
			"KoR\Textures\body\SM_Body_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Firstborn_Armour="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Firstborn_SM_KoR_6";
		};
	};
	class Mk5PowerArmor_KoR: TIOW_Mk5PowerArmor_1_UM
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Mk5 Power Armor";
		picture="\TIOW_SM\Icon\MK5Uniform_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\fb_armor_KoR_CO.paa",
			"KoR\Textures\body\SM_Body_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Firstborn_Armour="Mk5";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Firstborn_SM_KoR_5";
		};
	};
	class Mk4PowerArmor_KoR: TIOW_Mk4PowerArmor_1_UM
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Mk4 Power Armor";
		picture="\TIOW_SM\Icon\MK4Uniform_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\fb_armor_KoR_CO.paa",
			"KoR\Textures\body\SM_Body_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Firstborn_Armour="Mk4";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Firstborn_SM_KoR_4";
		};
	};
	class Mk2PowerArmor_KoR: TIOW_Mk2PowerArmor_1_UM
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Mk2 Power Armor";
		picture="\TIOW_SM\Icon\MK2Uniform_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\fb_armor_KoR_CO.paa",
			"KoR\Textures\body\SM_Body_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Firstborn_Armour="Mk2";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Firstborn_SM_KoR_2";
		};
	};

	class WBK_DT_DOS_U_KoR: WBK_DT_DOS_Redux_U
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Dreadnaught";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\Dread_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_Dread";
			Dreadnaught="Dreadnaught";
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\Dread_KoR_CO.paa"
			};
			uniformclass="WBK_DT_DOS_KoR";
		};
	};

	class WBK_DT_DOR_U_KoR: WBK_DT_DOS_Redux_U
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Dorus Dreadnaught";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\Dread_KOR_DORUS.paa"
		};
		class XtdGearInfo
		{
			model="KoR_Dread";
			Dreadnaught="Dorus";
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\dreadnaught\Dread_KOR_DORUS.paa"
			};
			uniformclass="WBK_DT_DOR_KoR";
		};
	};

	class WBK_DT_VEN_U_KoR: WBK_DT_DOS_Redux_Ven
	{
		author="Gigasus";
		scope=2;
		scopeArsenal=2;
		displayName="[KoR] Venerable Dreadnaught";
		model="Dos_Dreadnought_Redux\models\Ven_Dreadnought_Redux.p3d";
		hiddenSelections[]=
		{
			"Ven_Camo",
			"Chapter_Logo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\dreadnaught\Dread_VEN_KoR_CO.paa",
			"KoR\Textures\dreadnaught\KoR_Dread.paa"
		};
		class XtdGearInfo
		{
			model="KoR_Dread";
			Dreadnaught="Venerable";
		};
		class ItemInfo: ItemInfo
		{
			uniformclass="WBK_DT_Ven_KoR";
			uniformModel="Dos_Dreadnought_Redux\models\Ven_Dreadnought_Redux.p3d";
			hiddenSelections[]=
			{
				"Ven_Camo",
				"Chapter_Logo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\dreadnaught\Dread_VEN_KoR_CO.paa",
				"KoR\Textures\dreadnaught\KoR_Dread.paa"
			};
		};
	};

	class Primaris_SM_KoR_1_W: Primaris_Dos_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris Mk10";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KoR_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk10_Armour="Mk10";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_1";
		};
	};
	
	class Primaris_SM_KoR_2_W: Primaris_SM_KoR_1_W
	{
		model="Project_Primaris_D_Main\Models\alt1_Brother.p3d";
		displayName="[KoR] Primaris Mk6";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KoR_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk6_Armour="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_2";
		};
	};
	class Primaris_SM_KoR_3_W: Primaris_SM_KoR_1_W
	{
		model="Project_Primaris_D_Main\Models\alt2_Brother.p3d";
		displayName="[KoR] Primaris Mk7";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KoR_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk7_Armour="Mk7";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_3";
		};
	};
	class Primaris_SM_KoR_5_W: Primaris_SM_KoR_1_W
	{
		model="Project_Primaris_D_Main\Models\Bladeguard_Brother.p3d";
		displayName="[KoR] Primaris Bladeguard";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KoR_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Bladeguard_Armour="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_5";
		};
	};
	class Primaris_SM_KoR_6_W: Primaris_SM_KoR_1_W
	{
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Reiver";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KoR_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Reiver_Armour="Reiver";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_6";
		};
	};
	class Primaris_SM_KoR_7_W: Primaris_SM_KoR_1_W
	{
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Infiltrator";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KoR_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Infiltrator_Armour="Infiltrator";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_7";
		};
	};
	class Primaris_SM_KoR_4_W: Primaris_Dos_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="Project_Primaris_D_Main\Models\LT_Brother.p3d";
		displayName="[KoR] Primaris Lieutenant";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_lt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Primaris_Armour="LT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_4";
		};
	};
	class Primaris_SM_KoR_8_W: Primaris_Dos_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="Project_Primaris_D_Main\Models\Capt_Brother.p3d";
		displayName="[KoR] Primaris Captain";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_captain_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Primaris_Armour="Captain";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_8";
		};
	};

	class Primaris_SM_KoR_Vet_W: Primaris_Dos_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris Veteran Mk10";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteran_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk10_Armour="Veteran";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Vet";
		};
	};
	class Primaris_SM_KoR_Mk6_Vet_W: Primaris_SM_KoR_Vet_W
	{
		model="Project_Primaris_D_Main\Models\alt1_Brother.p3d";
		displayName="[KoR] Primaris Mk6 (Veteran)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteran_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk6_Armour="Veteran";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Mk6_Vet";
		};
	};
	class Primaris_SM_KoR_Mk7_Vet_W: Primaris_SM_KoR_Vet_W
	{
		model="Project_Primaris_D_Main\Models\alt2_Brother.p3d";
		displayName="[KoR] Primaris Mk7 (Veteran)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteran_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk7_Armour="Veteran";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Mk7_Vet";
		};
	};
	class Primaris_SM_KoR_BG_Vet_W: Primaris_SM_KoR_Vet_W
	{
		model="Project_Primaris_D_Main\Models\Bladeguard_Brother.p3d";
		displayName="[KoR] Primaris Bladeguard (Veteran)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteran_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Bladeguard_Armour="Veteran";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_BG_Vet";
		};
	};
	class Primaris_SM_KoR_Reiver_Vet_W: Primaris_SM_KoR_Vet_W
	{
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Reiver (Veteran)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteran_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Reiver_Armour="Veteran";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Reiver_Vet";
		};
	};
	class Primaris_SM_KoR_Infil_Vet_W: Primaris_SM_KoR_Vet_W
	{
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Infiltrator (Veteran)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteran_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Infiltrator_Armour="Veteran";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Infil_Vet";
		};
	};

	class Primaris_SM_KoR_SGT_W: Primaris_Dos_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris SGT Mk10";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_sgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk10_Armour="SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_SGT";
		};
	};
	class Primaris_SM_KoR_Mk6_SGT_W: Primaris_SM_KoR_SGT_W
	{
		model="Project_Primaris_D_Main\Models\alt1_Brother.p3d";
		displayName="[KoR] Primaris Mk6 (SGT)";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk6_Armour="SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Mk6_SGT";
		};
	};
	class Primaris_SM_KoR_Mk7_SGT_W: Primaris_SM_KoR_SGT_W
	{
		model="Project_Primaris_D_Main\Models\alt2_Brother.p3d";
		displayName="[KoR] Primaris Mk7 (SGT)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_sgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk7_Armour="SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Mk7_SGT";
		};
	};
	class Primaris_SM_KoR_BG_SGT_W: Primaris_SM_KoR_SGT_W
	{
		model="Project_Primaris_D_Main\Models\Bladeguard_Brother.p3d";
		displayName="[KoR] Primaris Bladeguard (SGT)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_sgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Bladeguard_Armour="SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_BG_SGT";
		};
	};
	class Primaris_SM_KoR_Reiver_SGT_W: Primaris_SM_KoR_SGT_W
	{
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Reiver (SGT)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_sgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Reiver_Armour="SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Reiver_SGT";
		};
	};
	class Primaris_SM_KoR_Infil_SGT_W: Primaris_SM_KoR_SGT_W
	{
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Infiltrator (SGT)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_sgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Infiltrator_Armour="SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Infil_SGT";
		};
	};

	class Primaris_SM_KoR_VetSGT_W: Primaris_Dos_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris Veteran SGT Mk10";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteransgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk10_Armour="Veteran SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_VetSGT";
		};
	};
	class Primaris_SM_KoR_Mk6_VetSGT_W: Primaris_SM_KoR_VetSGT_W
	{
		model="Project_Primaris_D_Main\Models\alt1_Brother.p3d";
		displayName="[KoR] Primaris Mk6 (Veteran SGT)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteransgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk6_Armour="Veteran SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Mk6_VetSGT";
		};
	};
	class Primaris_SM_KoR_Mk7_VetSGT_W: Primaris_SM_KoR_VetSGT_W
	{
		model="Project_Primaris_D_Main\Models\alt2_Brother.p3d";
		displayName="[KoR] Primaris Mk7 (Veteran SGT)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteransgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Mk7_Armour="Veteran SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Mk7_VetSGT";
		};
	};
	class Primaris_SM_KoR_BG_VetSGT_W: Primaris_SM_KoR_VetSGT_W
	{
		model="Project_Primaris_D_Main\Models\Bladeguard_Brother.p3d";
		displayName="[KoR] Primaris Bladeguard (Veteran SGT)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteransgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Bladeguard_Armour="Veteran SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_BG_VetSGT";
		};
	};
	class Primaris_SM_KoR_Reiver_VetSGT_W: Primaris_SM_KoR_VetSGT_W
	{
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Reiver (Veteran SGT)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteransgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Reiver_Armour="Veteran SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Reiver_VetSGT";
		};
	};
	class Primaris_SM_KoR_Infil_VetSGT_W: Primaris_SM_KoR_VetSGT_W
	{
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Infiltrator (Veteran SGT)";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_veteransgt_CO.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Infiltrator_Armour="Veteran SGT";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_KoR_Infil_VetSGT";
		};
	};

// Vests
	class TIOW_MK7Limbs_UM;
	class CTR_MKX_Pauldrons_Base;
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
			"KoR\Textures\body\SM_Body_co.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Firstborn_Pauldrons="Mk7";
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
				"KoR\Textures\body\SM_Body_co.paa",
				"KoR\Textures\armour\fb_armor_KoR_CO.paa"
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
	class Mk6Limbs_KoR: TIOW_Mk7Limbs_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Firstborn Mk6 Pauldrons";
		picture="\TIOW_SM\Icon\Mk6Vests_ca.paa";
		model="\TIOW_SM\Marine\Model\MK6_Vest.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"KoR\Textures\body\SM_Body_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Firstborn_Pauldrons="Mk6";
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
				"",
				"KoR\Textures\body\SM_Body_co.paa"
			};
			uniformModel="\TIOW_SM\Marine\Model\MK6_Vest.p3d";
			containerClass="Supply300";
			mass=5;
		};
	};
	class Mk4Limbs_KoR: TIOW_Mk7Limbs_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Firstborn Mk4 Pauldrons";
		picture="\TIOW_SM\Icon\Mk4Vests_ca.paa";
		model="\TIOW_SM\Marine\Model\MK4_Vest.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\body\SM_Body_co.paa",
			"KoR\Textures\armour\fb_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Firstborn_Pauldrons="Mk4";
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
				"KoR\Textures\body\SM_Body_co.paa",
				"KoR\Textures\armour\fb_armor_KoR_CO.paa"
			};
			uniformModel="\TIOW_SM\Marine\Model\MK4_Vest.p3d";
			containerClass="Supply300";
			mass=5;
		};
	};
	class Mk2Limbs_KoR: TIOW_Mk7Limbs_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Firstborn Mk2 Pauldrons";
		picture="\TIOW_SM\Icon\Mk2Vests_ca.paa";
		model="\TIOW_SM\Marine\Model\MK2_Vest.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\fb_armor_KoR_CO.paa",
			"KoR\Textures\body\SM_Body_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Firstborn_Pauldrons="Mk2";
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
				"KoR\Textures\armour\fb_armor_KoR_CO.paa",
				"KoR\Textures\body\SM_Body_co.paa"
			};
			uniformModel="\TIOW_SM\Marine\Model\MK2_Vest.p3d";
			containerClass="Supply300";
			mass=5;
		};
	};

//Primaris Pauldrons
	class Primaris_Vest_40k_KoR_1: DOS_Primaris_40k_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk10";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Mk10";
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
				"KoR\Textures\armour\prim_armor_KoR_CO.paa"
			};
		};
	};
	class Primaris_Vest_40k_KoR_3: DOS_Primaris_40k_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Lieutenant";
		model="Project_Primaris_D_Main\Models\Shoulder_LT.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_lt_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="LT";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_LT.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\armour\prim_armor_KOR_lt_CO.paa"
			};
		};
	};
	class Primaris_Vest_40k_KoR_8: DOS_Primaris_40k_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Captain";
		model="Project_Primaris_D_Main\Models\Shoulder_Cap.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KOR_captain_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Captain";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Cap.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\armour\prim_armor_KOR_captain_CO.paa"
			};
		};
	};

	class Primaris_Vest_40k_KoR_Scout_Phobos: DOS_Primaris_40k_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Scout";
		model="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\pauldrons\Scout_Phobos_pauldron.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Scout";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\pauldrons\Scout_Phobos_pauldron.paa"
			};
		};
	};
	class Primaris_Vest_40k_KoR_2: Primaris_Vest_40k_KoR_1
	{
		displayName="[KoR] Primaris MK6";
		model="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		};
	};	
	class Primaris_Vest_40k_KoR_6: Primaris_Vest_40k_KoR_1
	{
		displayName="[KoR] Primaris MK2";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Mk2";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_7: Primaris_Vest_40k_KoR_1
	{
		displayName="[KoR] Primaris MK3";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Mk3";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		};
	};
	
	class Primaris_Vest_40k_KoR_Phobos: Primaris_Vest_40k_KoR_1
	{
		displayName="[KoR] Primaris Phobos";
		model="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Phobos";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_BG: Primaris_Vest_40k_KoR_1
	{
		displayName="[KoR] Primaris Bladeguard";
		model="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		};
	};

//Battleline Pauldron
	class Primaris_Vest_40k_KoR_BL: DOS_Primaris_40k_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Battleline Mk10";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\pauldrons\Battleline_Pauldron.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Battleline="Mk10";
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
				"KoR\Textures\pauldrons\Battleline_Pauldron.paa"
			};
		};
	};
	class Primaris_Vest_40k_KoR_Mk6_BL: Primaris_Vest_40k_KoR_BL
	{
		displayName="[KoR] Primaris Battleline Mk6";
		model="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Battleline="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Mk3_BL: Primaris_Vest_40k_KoR_BL
	{
		displayName="[KoR] Primaris Battleline Mk3";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Battleline="Mk3";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Mk2_BL: Primaris_Vest_40k_KoR_BL
	{
		displayName="[KoR] Primaris Battleline Mk2";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Battleline="Mk2";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Phobos_BL: Primaris_Vest_40k_KoR_BL
	{
		displayName="[KoR] Primaris Battleline Phobos";
		model="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Battleline="Phobos";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_BG_BL: Primaris_Vest_40k_KoR_BL
	{
		displayName="[KoR] Primaris Battleline Bladeguard";
		model="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Battleline="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		};
	};

//Fire Support Pauldron
	class Primaris_Vest_40k_KoR_FS: DOS_Primaris_40k_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Fire Support Mk10";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\pauldrons\Fire_Support_Pauldron.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Fire_Support="Mk10";
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
				"KoR\Textures\pauldrons\Fire_Support_Pauldron.paa"
			};
		};
	};
	class Primaris_Vest_40k_KoR_Mk6_FS: Primaris_Vest_40k_KoR_FS
	{
		displayName="[KoR] Primaris Fire Support Mk6";
		model="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Fire_Support="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Mk3_FS: Primaris_Vest_40k_KoR_FS
	{
		displayName="[KoR] Primaris Fire Support Mk3";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Fire_Support="Mk3";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Mk2_FS: Primaris_Vest_40k_KoR_FS
	{
		displayName="[KoR] Primaris Fire Support Mk2";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Fire_Support="Mk2";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Phobos_FS: Primaris_Vest_40k_KoR_FS
	{
		displayName="[KoR] Primaris Fire Support Phobos";
		model="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Fire_Support="Phobos";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_BG_FS: Primaris_Vest_40k_KoR_FS
	{
		displayName="[KoR] Primaris Fire Support Bladeguard";
		model="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Fire_Support="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		};
	};

//Close Support Pauldrons
	class Primaris_Vest_40k_KoR_CS: DOS_Primaris_40k_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Close Support Mk10";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\pauldrons\Close_Support_Pauldron.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Close_Support="Mk10";
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
				"KoR\Textures\pauldrons\Close_Support_Pauldron.paa"
			};
		};
	};
	class Primaris_Vest_40k_KoR_Mk6_CS: Primaris_Vest_40k_KoR_CS
	{
		displayName="[KoR] Primaris Close Support Mk6";
		model="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Close_Support="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Mk3_CS: Primaris_Vest_40k_KoR_CS
	{
		displayName="[KoR] Primaris Fire Support Mk3";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Close_Support="Mk3";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Mk2_CS: Primaris_Vest_40k_KoR_CS
	{
		displayName="[KoR] Primaris Fire Support Mk2";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Close_Support="Mk2";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Phobos_CS: Primaris_Vest_40k_KoR_CS
	{
		displayName="[KoR] Primaris Close Support Phobos";
		model="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Close_Support="Phobos";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_BG_CS: Primaris_Vest_40k_KoR_CS
	{
		displayName="[KoR] Primaris Close Support Bladeguard";
		model="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Close_Support="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		};
	};

//Veteran Pauldron
	class Primaris_Vest_40k_KoR_Vet: DOS_Primaris_40k_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Veteran Mk10";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\pauldrons\Veteran_Pauldron.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Veteran="Mk10";
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
				"KoR\Textures\pauldrons\Veteran_Pauldron.paa"
			};
		};
	};
	class Primaris_Vest_40k_KoR_Mk6_Vet: Primaris_Vest_40k_KoR_Vet
	{
		displayName="[KoR] Primaris Veteran Mk6";
		model="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Veteran="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Mk3_Vet: Primaris_Vest_40k_KoR_Vet
	{
		displayName="[KoR] Primaris Veteran Mk3";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Veteran="Mk3";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Mk2_Vet: Primaris_Vest_40k_KoR_Vet
	{
		displayName="[KoR] Primaris Veteran Mk2";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Veteran="Mk2";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Phobos_Vet: Primaris_Vest_40k_KoR_Vet
	{
		displayName="[KoR] Primaris Veteran Phobos";
		model="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Veteran="Phobos";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_BG_Vet: Primaris_Vest_40k_KoR_Vet
	{
		displayName="[KoR] Primaris Veteran Bladeguard";
		model="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Veteran="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		};
	};

//Command Pauldron
	class Primaris_Vest_40k_KoR_CMD: DOS_Primaris_40k_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Command Mk10";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\pauldrons\Command_Pauldron.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Command="Mk10";
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
				"KoR\Textures\pauldrons\Command_Pauldron.paa"
			};
		};
	};
	class Primaris_Vest_40k_KoR_Mk6_CMD: Primaris_Vest_40k_KoR_CMD
	{
		displayName="[KoR] Primaris Command Mk6";
		model="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Command="Mk6";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Mk6.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Mk3_CMD: Primaris_Vest_40k_KoR_CMD
	{
		displayName="[KoR] Primaris Command Mk3";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Command="Mk3";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_1.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Mk2_CMD: Primaris_Vest_40k_KoR_CMD
	{
		displayName="[KoR] Primaris Command Mk2";
		model="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Command="Mk2";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_MK3_2.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_Phobos_CMD: Primaris_Vest_40k_KoR_CMD
	{
		displayName="[KoR] Primaris Command Phobos";
		model="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Command="Phobos";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		};
	};
	class Primaris_Vest_40k_KoR_BG_CMD: Primaris_Vest_40k_KoR_CMD
	{
		displayName="[KoR] Primaris Command Bladeguard";
		model="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			P_Command="Bladeguard";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Bladegaurd.p3d";
		};
	};

//Apothecary Pauldron
	class KoR_Pauldrons_Apoth: CTR_MKX_Pauldrons_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] MkX Apothecary Pauldrons";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\pauldrons\Apoth_Pauldron.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Apothecary";
		};
	};

//Techmarine Pauldron
	class KoR_Pauldrons_Tech: CTR_MKX_Pauldrons_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] MkX Techmarine Pauldrons";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\pauldrons\Tech_Pauldron.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Techmarine";
		};
	};

//Librarian Pauldron
	class KoR_Pauldrons_Lib: CTR_MKX_Pauldrons_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] MkX Librarian Pauldrons";
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\pauldrons\Lib_Pauldron.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Librarian";
		};
	};

//Chaplain Pauldron
	class KoR_Pauldrons_Chap: CTR_MKX_Pauldrons_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] MkX Chaplain Pauldrons";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\pauldrons\Chaplain_Pauldron.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Chaplain";
		};
	};

//Gravis Armour & Helmet
	class H_HelmetB;
	class KoR_gravis_Helmet: H_HelmetB
	{
		author = "Gigasus";
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		displayName = "[KoR] Gravis Helmet";
		model = "\dmcls\dmcls_gravis\dmcls_gravis_helmet.p3d";
		hiddenSelections[] = 
		{	
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\armour\Gravis3_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Helmets="Gravis";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\dmcls\dmcls_gravis\dmcls_gravis_helmet.p3d";
			hiddenSelections[] = 
			{
				"camo"
			};
			hiddenSelectionsTextures[] = 
			{
				"KoR\Textures\armour\Gravis3_CO.paa"
			};
		};
	};

class KoR_gravis_Helmet_VET: H_HelmetB
	{
		author = "Gigasus";
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		displayName = "[KoR] Gravis Veteran Helmet";
		model = "\dmcls\dmcls_gravis\dmcls_gravis_helmet.p3d";
		hiddenSelections[] = 
		{	
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\armour\Gravis3_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_PrimarisMarine_Helmets";
			Primaris_Vet_Helmets="Gravis";
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\dmcls\dmcls_gravis\dmcls_gravis_helmet.p3d";
			hiddenSelections[] = 
			{
				"camo"
			};
			hiddenSelectionsTextures[] = 
			{
				"KoR\Textures\armour\Gravis3_CO.paa"
			};
		};
	};

	class KoR_Gravis_W: TIOWSpaceMarineUnderwear1_base
	{
		author = "Gigasus";
		scope=0;
		scopeArsenal=0;
		scopeCurator=0;
		displayName = "[KoR] Gravis";
	
		//picture = "\TIOW_SM\Icon\MK7UniformImperialis_ca.paa";
		hiddenSelections[] = 
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\armour\Gravis1_CO.paa",
			"KoR\Textures\armour\Gravis2_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Armour";
			Primaris_Armour="Gravis";
		};
		class ItemInfo: ItemInfo
		{
			uniformClass = "KoR_Gravis";
			containerClass = "Supply200";
		};
	};
	class ItemCore;
	class VestItem;
	class KoR_gravisPauldrons: ItemCore
	{
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
		displayName = "[KoR] Gravis Pauldrons";
		model = "\dmcls\dmcls_gravis\dmcls_gravis_vest.p3d";
		descriptionShort = "Armor Level XXX";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\armour\Gravis3_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Pauldrons";
			Primaris_Pauldrons="Gravis";
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = 
			{
				"camo"
			};
			hiddenSelectionsTextures[] = 
			{
				"KoR\Textures\armour\Gravis3_CO.paa"
			};
			uniformModel = "\dmcls\dmcls_gravis\dmcls_gravis_vest.p3d";
			containerClass = "Supply140";
			mass = 5;
			
		};
	};

//Terminators
class BT_THelmet_Core;
class BT_T_form;
class BT_TerminatorVest_Core;
class BT_TerminatorVest_Core2;
class BT_TerminatorVest_Core3;
class BTT_PowerFist01;
class KoR_PowerFist: BTT_PowerFist01
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author = "Gigasus";
		displayName="[KoR] Terminator - Power Fist"; 
		baseWeapon = "KoR_PowerFist";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"KoR\Textures\terminators\PowerFist_KoR_co.paa"};
	};
class KoR_THelmet : BT_THelmet_Core 
	{
        scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author = "Gigasus";
        displayName = "[KoR] Terminator Helmet";
        model = "BT_Terminator\models\helmet.p3d";
        hiddenSelections[] = 
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\terminators\termi_helm.paa"
		};
		class XtdGearInfo
		{
			model="KoR_TermHelmet";
			Terminator_Helmets="Standard";
		};
        class ItemInfo : ItemInfo 
		{
            hiddenSelections[] = 
			{
				"camo"
			};
            hiddenSelectionsTextures[] = 
			{
				"KoR\Textures\terminators\termi_helm.paa"
			};
        };
    };
class KoR_THelmet_Vet : BT_THelmet_Core 
	{
        scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author = "Gigasus";
        displayName = "[KoR] Terminator Helmet Vet";
        model = "BT_Terminator\models\helmet.p3d";
        hiddenSelections[] = 
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\terminators\termi_helm_test.paa"
		};
		class XtdGearInfo
		{
			model="KoR_TermHelmet";
			Terminator_Helmets="Veteran";
		};
        class ItemInfo : ItemInfo 
		{
            hiddenSelections[] = 
			{
				"camo"
			};
            hiddenSelectionsTextures[] = 
			{
				"KoR\Textures\terminators\termi_helm_test.paa"
			};
        };
    };
class KoR_Terminator_W : BT_T_form 
	{
        scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author = "Gigasus";
        displayname = "[KoR] Terminator Armour";
        model = "BT_Terminator\models\bt_terminator.p3d";
        hiddenSelections[] = 
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\terminators\bt_termi_co_B.paa"
		};
		class XtdGearInfo
		{
			model="KoR_TermArmour";
			Terminator_Armour="Standard";
		};
        class ItemInfo : ItemInfo 
		{
            uniformclass = "KoR_Terminator";
        };
    };
class KoR_Terminator2_W : BT_T_form
	{
        scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author = "Gigasus";
        model = "BT_Terminator\models\bt_terminator2.p3d";
        displayname = "[KoR] Terminator Armour Alt";
        hiddenSelections[] = 
		{
			"camo",
			"camo2"
		};
        hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\terminators\bt_termi_co_B.paa",
			"KoR\Textures\terminators\bt_termi2_co_B.paa"
		};
		class XtdGearInfo
		{
			model="KoR_TermArmour";
			Terminator_Armour="Alt";
		};
        class ItemInfo : ItemInfo 
		{
            uniformmodel = "BT_Terminator\models\bt_terminator2.p3d";
            uniformclass = "KoR_Terminator_Alt";
        };
    };
class KoR_TerminatorVest : BT_TerminatorVest_Core 
	{
        scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author = "Gigasus";
        displayName = "[KoR] Terminator Pauldron 1";
        hiddenSelections[] = 
		{
			"camo"
		};
        hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\terminators\bt_termi_co_b.paa"
		};
		class XtdGearInfo
		{
			model="KoR_TermPauldron";
			Terminator_Pauldron="Pauldron 1";
		};
        class ItemInfo : ItemInfo 
		{
            hiddenSelections[] = 
			{
				"camo"
			};
            hiddenSelectionsTextures[] = 
			{
				"KoR\Textures\terminators\bt_termi_co_b.paa"
			};
        };
    };
class KoR_TerminatorVest2 : BT_TerminatorVest_Core2 
	{
        scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author = "Gigasus";
        displayName = "[KoR] Terminator Pauldron 2";
        hiddenSelections[] = 
		{
			"camo_pad",
			"camo_rim"
		};
        hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\terminators\vest2_KoR_Termi_b.paa",
			"KoR\Textures\terminators\vest2_KoR_Termi_b.paa"
		};
        hiddenSelectionsMaterials[] = 
		{
			"BT_Terminator\materials\vest2.rvmat",
			"BT_Terminator\materials\vest2m.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_TermPauldron";
			Terminator_Pauldron="Pauldron 2";
		};
        class ItemInfo : ItemInfo 
		{
            hiddenSelections[] = 
			{
				"camo_pad",
				"camo_rim"
			};
            hiddenSelectionsTextures[] = 
			{
				"KoR\Textures\terminators\vest2_KoR_Termi_b.paa",
				"KoR\Textures\terminators\vest2_KoR_Termi_b.paa"
			};
            hiddenSelectionsMaterials[] = 
			{
				"BT_Terminator\materials\vest2.rvmat",
				"BT_Terminator\materials\vest2m.rvmat"
			};
        };
    };
class KoR_TerminatorVest3 : BT_TerminatorVest_Core3 
	{
        scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author = "Gigasus";
        displayName = "[KoR] Terminator Pauldron 3";
        hiddenSelections[] = 
		{
			"camo_pad",
			"camo_rim"
		};
        hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\terminators\vest2_KoR_Termi_b.paa",
			"KoR\Textures\terminators\vest2_co_g.paa"
		};
        hiddenSelectionsMaterials[] = 
		{
			"BT_Terminator\materials\vest2.rvmat",
			"BT_Terminator\materials\vest2m.rvmat"
		};
		class XtdGearInfo
		{
			model="KoR_TermPauldron";
			Terminator_Pauldron="Pauldron 3";
		};
        class ItemInfo : ItemInfo 
		{
            hiddenSelections[] = 
			{
				"camo_pad",
				"camo_rim"
			};
            hiddenSelectionsTextures[] = 
			{
				"KoR\Textures\terminators\vest2_KoR_Termi_b.paa",
				"KoR\Textures\terminators\vest2_co_g.paa"
			};
            hiddenSelectionsMaterials[] = 
			{
				"BT_Terminator\materials\vest2.rvmat",
				"BT_Terminator\materials\vest2m.rvmat"
			};
        };
    };

//NVGs	
	class Integrated_NVG_TI_1_F;
	class DBA_Praetor_Addon_NVG;
	class DBA_Praetor_Addon_Halo_NVG;
	class DBA_Praetor_Addon2_Halo_NVG;
	class Flag_KoR_SGT_NVG: Integrated_NVG_TI_1_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[KoR] SGT Flag NVG";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		hiddenSelections[]=
		{
			"FlagCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_SGT_Flag_CO.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
			modelOff="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
			mass=1;
			hiddenSelections[]=
			{
				"FlagCamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\flag.banners\KoR_SGT_Flag_CO.paa"
			};
		};
	};
	class Flag_KoR_SGT_1_NVG: Integrated_NVG_TI_1_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[KoR] SGT Gladius Flag NVG";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		hiddenSelections[]=
		{
			"FlagCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_SGT_1_Flag_CO.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
			modelOff="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
			mass=1;
			hiddenSelections[]=
			{
				"FlagCamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\flag.banners\KoR_SGT_1_Flag_CO.paa"
			};
		};
	};
	class Flag_KoR_SGT_2_NVG: Integrated_NVG_TI_1_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[KoR] SGT Hammerdown Flag NVG";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		hiddenSelections[]=
		{
			"FlagCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_SGT_2_Flag_CO.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
			modelOff="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
			mass=1;
			hiddenSelections[]=
			{
				"FlagCamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\flag.banners\KoR_SGT_2_Flag_CO.paa"
			};
		};
	};
	class Flag_KoR_SGT_3_NVG: Integrated_NVG_TI_1_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[KoR] SGT Cataphractii Flag NVG";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		hiddenSelections[]=
		{
			"FlagCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_SGT_3_Flag_CO.paa"
		};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
			modelOff="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
			mass=1;
			hiddenSelections[]=
			{
				"FlagCamo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\flag.banners\KoR_SGT_3_Flag_CO.paa"
			};
		};
	};
	class Steve_30k_Banner_1_NVG;
	class KoR_Banner_1_1_NVG: Steve_30k_Banner_1_NVG
	{
		scope = 2;
		scopeArsenal = 2;
		displayName="[KoR] Banner";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		hiddenSelections[]=
		{
			"30k_Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_Banner_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"30k_Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\flag.banners\KoR_Banner_CO.paa"
			};
		};
	};
	class KoR_Cape_NVG: Integrated_NVG_TI_1_F
	{
		displayName="[KoR] Officer Cape NVG";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		model="BA_Pauldrons\Batabard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\cosmetics\KoR_Command_Cape.paa"
		};
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="BA_Pauldrons\Batabard.p3d";
			modelOff="BA_Pauldrons\Batabard.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\cosmetics\KoR_Command_Cape.paa"
			};
			mass=10;
		};
	};
	class KoR_Cape_NVG_White: Integrated_NVG_TI_1_F
	{
		displayName="[KoR] Officer Cape NVG (White)";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		model="BA_Pauldrons\Batabard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\cosmetics\KoR_Command_Cape_white.paa"
		};
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="BA_Pauldrons\Batabard.p3d";
			modelOff="BA_Pauldrons\Batabard.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"KoR\Textures\cosmetics\KoR_Command_Cape_white.paa"
			};
			mass=10;
		};
	};
	class KoR_Praetor_Cape_NVG: DBA_Praetor_Addon_NVG
	{
		displayName="[KoR] Praetor & Officer Cape NVG";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		model="BA_Pauldrons\Praetor_Cape.p3d";
		hiddenSelections[]=
		{
			"camo",
			"cape"
		};
		hiddenSelectionsTextures[]=
		{
			"BA_Pauldrons\textures\Praetor_CO.paa",
			"KoR\Textures\cosmetics\KoR_Command_Cape.paa"
		};
	};
	class KoR_Praetor_Cape_NVG_White: DBA_Praetor_Addon_NVG
	{
		displayName="[KoR] Praetor & Officer Cape NVG (White)";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		model="BA_Pauldrons\Praetor_Cape.p3d";
		hiddenSelections[]=
		{
			"camo",
			"cape"
		};
		hiddenSelectionsTextures[]=
		{
			"BA_Pauldrons\textures\Praetor_CO.paa",
			"KoR\Textures\cosmetics\KoR_Command_Cape_white.paa"
		};
	};
	class KoR_Praetor_Cape_Halo_Copper_NVG: DBA_Praetor_Addon_Halo_NVG
	{
		displayName="[KoR] Praetor, Officer Cape & Copper Halo";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		model="BA_Pauldrons\Praetor_Cape_Halo.p3d";
		hiddenSelections[]=
		{
			"camo",
			"cape",
			"halo"
		};
		hiddenSelectionsTextures[]=
		{
			"BA_Pauldrons\textures\Praetor_CO.paa",
			"KoR\Textures\cosmetics\KoR_Command_Cape.paa",
			"BA_Pauldrons\Textures\Loyalist_Halo_Copper_CO.paa"
		};
	};
	class KoR_Praetor_Cape_Halo_Silver_NVG: DBA_Praetor_Addon2_Halo_NVG
	{
		displayName="[KoR] Praetor, Officer Cape & Silver Halo";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		model="BA_Pauldrons\Praetor_Cape_Halo.p3d";
		hiddenSelections[]=
		{
			"camo",
			"cape",
			"halo"
		};
		hiddenSelectionsTextures[]=
		{
			"BA_Pauldrons\textures\Praetor_CO.paa",
			"KoR\Textures\cosmetics\KoR_Command_Cape.paa",
			"BA_Pauldrons\Textures\Loyalist_Halo_Silver_CO.paa"
		};
	};
	class KoR_Praetor_Cape_Halo_Gold_NVG: DBA_Praetor_Addon2_Halo_NVG
	{
		displayName="[KoR] Praetor, Officer Cape & Gold Halo";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		model="BA_Pauldrons\Praetor_Cape_Halo.p3d";
		hiddenSelections[]=
		{
			"camo",
			"cape",
			"halo"
		};
		hiddenSelectionsTextures[]=
		{
			"BA_Pauldrons\textures\Praetor_CO.paa",
			"KoR\Textures\cosmetics\KoR_Command_Cape.paa",
			"BA_Pauldrons\Textures\Loyalist_Halo_CO.paa"
		};
	};
	class KoR_Praetor_Cape_Halo_Copper_NVG_White: DBA_Praetor_Addon_Halo_NVG
	{
		displayName="[KoR] Praetor, Officer Cape & Copper Halo (White)";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		model="BA_Pauldrons\Praetor_Cape_Halo.p3d";
		hiddenSelections[]=
		{
			"camo",
			"cape",
			"halo"
		};
		hiddenSelectionsTextures[]=
		{
			"BA_Pauldrons\textures\Praetor_CO.paa",
			"KoR\Textures\cosmetics\KoR_Command_Cape_white.paa",
			"BA_Pauldrons\Textures\Loyalist_Halo_Copper_CO.paa"
		};
	};
	class KoR_Praetor_Cape_Halo_Silver_NVG_White: DBA_Praetor_Addon2_Halo_NVG
	{
		displayName="[KoR] Praetor, Officer Cape & Silver Halo (White)";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		model="BA_Pauldrons\Praetor_Cape_Halo.p3d";
		hiddenSelections[]=
		{
			"camo",
			"cape",
			"halo"
		};
		hiddenSelectionsTextures[]=
		{
			"BA_Pauldrons\textures\Praetor_CO.paa",
			"KoR\Textures\cosmetics\KoR_Command_Cape_white.paa",
			"BA_Pauldrons\Textures\Loyalist_Halo_Silver_CO.paa"
		};
	};
	class KoR_Praetor_Cape_Halo_Gold_NVG_White: DBA_Praetor_Addon2_Halo_NVG
	{
		displayName="[KoR] Praetor, Officer Cape & Gold Halo (White)";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		model="BA_Pauldrons\Praetor_Cape_Halo.p3d";
		hiddenSelections[]=
		{
			"camo",
			"cape",
			"halo"
		};
		hiddenSelectionsTextures[]=
		{
			"BA_Pauldrons\textures\Praetor_CO.paa",
			"KoR\Textures\cosmetics\KoR_Command_Cape_white.paa",
			"BA_Pauldrons\Textures\Loyalist_Halo_CO.paa"
		};
	};
	class NVGoggles;
	class KoR_gravis_pipes: NVGoggles
    {
        scope = 0;
		scopeArsenal = 0;
		author="Gigasus";    
        displayName="[KoR] Gravis Pipes";        
        //picture="\TIOW_IG_Cosmetics\Bionic_Eye\data\bionic_eye_icon.paa";

    	model = "\dmcls\dmcls_gravis\dmcls_gravis_pipes.p3d";
    	hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\armour\Gravis1_CO.paa"
		};
        //modelOptics="\TIOW_IG_Cosmetics\Bionic_Eye\Bionic_eye_reticle.p3d";
        visionMode[] = {"Normal","NVG","TI"};
        class ItemInfo: ItemInfo
        {
            type = 616;
            uniformModel="\dmcls\dmcls_gravis\dmcls_gravis_pipes.p3d";
            modelOff="\dmcls\dmcls_gravis\dmcls_gravis_pipes.p3d";
            hiddenSelections[] = 
			{
				"camo"
			};
			hiddenSelectionsTextures[] = 
			{
				"KoR\Textures\armour\Gravis1_CO.paa"
			};
        };
        identityTypes[]={};
    };
};