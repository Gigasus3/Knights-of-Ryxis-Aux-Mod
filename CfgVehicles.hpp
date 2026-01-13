class CfgVehicles
{

  //
  // #  Placeable Tact. Marines #
  //

class TIOW_Tactical_SL_1; // MK 7
class TIOW_Tactical_BT_3;
class CTR_Primaris_Unit_BT;
class BT_ME;
class TIOWSpaceMarine1;
class Firstborn_SM_KoR_1: TIOW_Tactical_SL_1
    {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
    	author="Gigasus";
    	displayName="[KoR] MK7 Brother";
		model="\TIOW_Sm\Marine\Model\MK7_Uniform.p3d";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Firstborn";
    	backpack="Mk4Powerpack_Firstborn";
    	uniformClass="Mk7PowerArmor_Firstborn"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
    	hiddenSelectionsTextures[]=
    	{
        	"KoR\Textures\armour\fb_armor_KoR_CO.paa", // Link these to your own file path
        	"KoR\Textures\body\SM_Body_co.paa"
    	};
    	Items[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		RespawnItems[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		linkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK7Helmet_BBFirstborn",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK7Helmet_BBFirstborn",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		weapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		magazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
  		respawnweapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		respawnMagazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
    };
class Firstborn_SM_KoR_3: TIOW_Tactical_SL_1
    {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
    	author="Gigasus";
    	displayName="[KoR] MK3 Brother";
		model="\TIOW_Sm\Marine\Model\MK3_Uniform.p3d";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Firstborn";
    	backpack="Mk4Powerpack_Firstborn";
    	uniformClass="Mk3PowerArmor_Firstborn"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
    	hiddenSelectionsTextures[]=
    	{
        	"KoR\Textures\armour\fb_armor_KoR_CO.paa", // Link these to your own file path
        	"KoR\Textures\body\SM_Body_co.paa"
    	};
    	Items[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		RespawnItems[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		linkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK3Helmet_KoR",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK3Helmet_KoR",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		weapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		magazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
  		respawnweapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		respawnMagazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
    };
class Firstborn_SM_KoR_2: TIOW_Tactical_SL_1
    {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
    	author="Gigasus";
    	displayName="[KoR] MK2 Brother";
		model="\TIOW_Sm\Marine\Model\MK2_Uniform.p3d";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Firstborn";
    	backpack="Mk2Powerpack_KoR";
   		uniformClass="Tactical_KoR_MK2"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
    	hiddenSelectionsTextures[]=
    	{
        	"KoR\Textures\armour\fb_armor_KoR_CO.paa", // Link these to your own file path
        	"KoR\Textures\body\SM_Body_co.paa"
    	};
    	Items[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		RespawnItems[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		linkedItems[]=
  		{
  			"ItemGPS",
  			"Mk2Limbs_KoR",
  			"MK2Helmet_KoR",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk2Limbs_KoR",
  			"MK2Helmet_KoR",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		weapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		magazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
  		respawnweapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		respawnMagazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
    };
class Firstborn_SM_KoR_4: TIOW_Tactical_SL_1
    {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
   		author="Gigasus";
    	displayName="[KoR] MK4 Brother";
		model="\TIOW_Sm\Marine\Model\MK4_Uniform.p3d";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Firstborn";
		backpack="Mk4Powerpack_Firstborn";
    	uniformClass="Tactical_KoR_MK4"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
    	hiddenSelectionsTextures[]=
    	{
        	"KoR\Textures\armour\fb_armor_KoR_CO.paa", // Link these to your own file path
        	"KoR\Textures\body\SM_Body_co.paa"
    	};
     	Items[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		RespawnItems[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		linkedItems[]=
  		{
  			"ItemGPS",
  			"Mk4Limbs_KoR",
  			"MK4Helmet_KoR",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk4Limbs_KoR",
  			"MK4Helmet_KoR",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		weapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		magazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
  		respawnweapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		respawnMagazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
    };
class Firstborn_SM_KoR_5: TIOW_Tactical_SL_1
    {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
    	author="Gigasus";
    	displayName="[KoR] MK5 Brother";
		model="\TIOW_Sm\Marine\Model\MK5_Uniform.p3d";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Firstborn";
    	backpack="Mk5Powerpack_KoR";
    	uniformClass="Tactical_KoR_MK5"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
    	hiddenSelectionsTextures[]=
    	{
       		"KoR\Textures\armour\fb_armor_KoR_CO.paa", // Link these to your own file path
        	"KoR\Textures\body\SM_Body_co.paa"
    	};
    	Items[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		RespawnItems[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		linkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK5Helmet_KoR",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK5Helmet_KoR",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		weapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		magazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
  		respawnweapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		respawnMagazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
    };
class Firstborn_SM_KoR_8: TIOW_Tactical_SL_1
    {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;	
    	author="Gigasus";
    	displayName="[KoR] MK8 Brother";
		model="\TIOW_Sm\Marine\Model\MK8_Uniform.p3d";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Firstborn";
    	backpack="Mk4Powerpack_Firstborn";
    	uniformClass="Mk8PowerArmor_KoR"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
    	hiddenSelectionsTextures[]=
    	{
        	"KoR\Textures\armour\fb_armor_KoR_CO.paa", // Link these to your own file path
        	"KoR\Textures\body\SM_Body_co.paa"
    	};
    	Items[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		RespawnItems[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		linkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK7Helmet_BBFirstborn",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK7Helmet_BBFirstborn",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		weapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		magazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
  		respawnweapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		respawnMagazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
    };
class Firstborn_SM_KoR_6: TIOW_Tactical_SL_1
    {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;	
    	author="Gigasus";
    	displayName="[KoR] MK6 Brother";
		model="\TIOW_Sm\Marine\Model\MK6_Uniform.p3d";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Firstborn";
    	backpack="Mk4Powerpack_Firstborn";
    	uniformClass="Tactical_KoR_MK6"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
    	hiddenSelectionsTextures[]=
     	{
        	"KoR\Textures\armour\fb_armor_KoR_CO.paa", // Link these to your own file path
        	"KoR\Textures\body\SM_Body_co.paa"
    	};
    	Items[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		RespawnItems[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		linkedItems[]=
  		{
  			"ItemGPS",
  			"Mk6Limbs_KoR",
  			"MK6Helmet_KoR",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk6Limbs_KoR",
  			"MK6Helmet_KoR",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		weapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		magazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
  		respawnweapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		respawnMagazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
    };
class Firstborn_SM_KoR_Imp: TIOW_Tactical_SL_1
    {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;	
    	author="Gigasus";
    	displayName="[KoR] Imperialis Brother";
		model="\TIOW_Sm\Marine\Model\MK7_Uniform_Imperialis.p3d";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Firstborn";
    	backpack="Mk4Powerpack_Firstborn";
    	uniformClass="Tactical_KoR_Imperialis"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
    	hiddenSelectionsTextures[]=
    	{
    		"KoR\Textures\armour\fb_armor_KoR_CO.paa", // Link these to your own file path
    		"KoR\Textures\body\SM_Body_co.paa"
    	};
    	Items[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		RespawnItems[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		linkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"KoR_MK7KnightHelmet",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"KoR_MK7KnightHelmet",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		weapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		magazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
  		respawnweapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		respawnMagazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
    };
class Firstborn_SM_KoR_VT: TIOW_Tactical_SL_1
    {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
    	author="Gigasus";
    	displayName="[KoR] Firstborn Brother Veteran";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Firstborn";
    	backpack="Mk4Powerpack_Firstborn";
    	uniformClass="Mk7PowerArmorImperialis_KoR"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
    	hiddenSelectionsTextures[]=
    	{
    		"KoR\Textures\armour\fb_armor_KoR_CO.paa", // Link these to your own file path
    		"KoR\Textures\body\SM_Body_co.paa"
    	};
    	Items[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		RespawnItems[]=
  		{
  			"FirstAidKit",
  			"FirstAidKit",
  			"FirstAidKit"
  		};
  		linkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK7Helmet_Firstborn_VET",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK7Helmet_Firstborn_VET",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"HOV_SW_VOX"
  		};
  		weapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		magazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
  		respawnweapons[]=
  		{
  			"Throw",
  			"Put",
  			"TIOW_GodwynBoltgun_1"
  		};
  		respawnMagazines[]=
  		{
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_30rnd_GodwynBoltgunMag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_frag_grenade_mag",
  			"TIOW_sm_krak_grenade_mag",
  			"TIOW_sm_smoke_grenade_mag"
  		};
    };
class Primaris_SM_KoR_1: TIOW_Tactical_BT_3
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris Mk10";
		uniformClass="Primaris_SM_KoR_1_W";
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		backpack="Primaris_Dos_PP_KoR_1";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_1",
			"Primaris_Helm_KoR_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_1",
			"Primaris_Helm_KoR_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
		weapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		magazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		respawnMagazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};

class Primaris_SM_KoR_Scout: TIOW_Tactical_BT_3
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris Scout Brother";
		uniformClass="Primaris_SM_KoR_1_W";
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		backpack="Primaris_Dos_PP_KoR_1";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Scout_Phobos",
			"Dos_SM_Scout_Helm_1_2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Scout_Phobos",
			"Dos_SM_Scout_Helm_1_2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
		weapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		magazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		respawnMagazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};

class Primaris_SM_KoR_Vet: TIOW_Tactical_BT_3
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris Mk10 (Veteran)";
		uniformClass="Primaris_SM_KoR_Vet_W";
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		backpack="Primaris_Dos_PP_KoR_1";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_VET",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_VET",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
		weapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		magazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		respawnMagazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};
class Primaris_SM_KoR_Mk6_Vet: Primaris_SM_KoR_Vet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\alt1_Brother.p3d";
		displayName="[KoR] Primaris Mk6 (Veteran)";
		uniformClass="Primaris_SM_KoR_Mk6_Vet_W";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Mk6_Vet",
			"Primaris_Helm_KoR_Mk6_Vet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Mk6_Vet",
			"Primaris_Helm_KoR_Mk6_Vet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
	};
class Primaris_SM_KoR_Mk7_Vet: Primaris_SM_KoR_Vet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\alt2_Brother.p3d";
		displayName="[KoR] Primaris Mk7 (Veteran)";
		uniformClass="Primaris_SM_KoR_Mk7_Vet_W";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_Mk7_Vet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_Mk7_Vet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
	};
class Primaris_SM_KoR_BG_Vet: Primaris_SM_KoR_Vet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Bladeguard_Brother.p3d";
		displayName="[KoR] Primaris Bladeguard (Veteran)";
		uniformClass="Primaris_SM_KoR_BG_Vet_W";
		backpack="Primaris_Dos_PP_KoR_2";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_BG_Vet",
			"Primaris_Helm_KoR_BG_Vet",
			"Flag_KoR_FW",
			"KoR_Banner_1_1_NVG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_BG_Vet",
			"Primaris_Helm_KoR_BG_Vet",
			"Flag_KoR_FW",
			"KoR_Banner_1_1_NVG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
		weapons[]=
		{
			"Throw",
			"Put",
			"Steve_Ryza_Pistol_Banner",
			"Web_Melee_PS_5"
		};
		magazines[]=
		{
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Steve_Ryza_Pistol_Banner",
			"Web_Melee_PS_5"
		};
		respawnMagazines[]=
		{
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};
class Primaris_SM_KoR_Reiver_Vet: Primaris_SM_KoR_Vet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Phobos_Reiver.p3d";
		displayName="[KoR] Primaris Reiver (Veteran)";
		uniformClass="Primaris_SM_KoR_Reiver_Vet_W";
		backpack="Primaris_Dos_PP_KoR_5";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_RV_Vet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_RV_Vet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
	};
class Primaris_SM_KoR_Infil_Vet: Primaris_SM_KoR_Vet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Infiltrator (Veteran)";
		uniformClass="Primaris_SM_KoR_Infil_Vet_W";
		backpack="Primaris_Dos_PP_KoR_6";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_Infil_Vet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_Infil_Vet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
	};

class Primaris_SM_KoR_SGT: TIOW_Tactical_BT_3
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris Mk10 (SGT)";
		uniformClass="Primaris_SM_KoR_SGT_W";
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		backpack="Primaris_Dos_PP_KoR_1";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_SGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_SGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
		weapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		magazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		respawnMagazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};
class Primaris_SM_KoR_Mk6_SGT: Primaris_SM_KoR_SGT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\alt1_Brother.p3d";
		displayName="[KoR] Primaris Mk6 (SGT)";
		uniformClass="Primaris_SM_KoR_Mk6_SGT_W";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Mk6_Vet",
			"Primaris_Helm_KoR_Mk6_SGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Mk6_Vet",
			"Primaris_Helm_KoR_Mk6_SGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};
class Primaris_SM_KoR_Mk7_SGT: Primaris_SM_KoR_SGT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\alt2_Brother.p3d";
		displayName="[KoR] Primaris Mk7 (SGT)";
		uniformClass="Primaris_SM_KoR_Mk7_SGT_W";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_Mk7_SGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_Mk7_SGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};
class Primaris_SM_KoR_BG_SGT: Primaris_SM_KoR_SGT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Bladeguard_Brother.p3d";
		displayName="[KoR] Primaris Bladeguard (SGT)";
		uniformClass="Primaris_SM_KoR_BG_SGT_W";
		backpack="Primaris_Dos_PP_KoR_2";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_BG_Vet",
			"Primaris_Helm_KoR_BG_SGT",
			"Flag_KoR_FW",
			"KoR_Banner_1_1_NVG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_BG_Vet",
			"Primaris_Helm_KoR_BG_SGT",
			"Flag_KoR_FW",
			"KoR_Banner_1_1_NVG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Steve_Ryza_Pistol_Banner",
			"Web_Melee_PS_5"
		};
		magazines[]=
		{
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Steve_Ryza_Pistol_Banner",
			"Web_Melee_PS_5"
		};
		respawnMagazines[]=
		{
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};
class Primaris_SM_KoR_Reiver_SGT: Primaris_SM_KoR_SGT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Phobos_Reiver.p3d";
		displayName="[KoR] Primaris Reiver (SGT)";
		uniformClass="Primaris_SM_KoR_Reiver_SGT_W";
		backpack="Primaris_Dos_PP_KoR_5";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_RV_SGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_RV_SGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};
class Primaris_SM_KoR_Infil_SGT: Primaris_SM_KoR_SGT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Infiltrator (SGT)";
		uniformClass="Primaris_SM_KoR_Infil_SGT_W";
		backpack="Primaris_Dos_PP_KoR_6";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_Infil_SGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_Infil_SGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};

class Primaris_SM_KoR_VetSGT: TIOW_Tactical_BT_3
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris Mk10 (Veteran SGT)";
		uniformClass="Primaris_SM_KoR_VetSGT_W";
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		backpack="Primaris_Dos_PP_KoR_1";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_VETSGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_VETSGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
		weapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		magazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		respawnMagazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};
class Primaris_SM_KoR_Mk6_VetSGT: Primaris_SM_KoR_VetSGT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\alt1_Brother.p3d";
		displayName="[KoR] Primaris Mk6 (Veteran SGT)";
		uniformClass="Primaris_SM_KoR_Mk6_VetSGT_W";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Mk6_Vet",
			"Primaris_Helm_KoR_Mk6_VetSGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Mk6_Vet",
			"Primaris_Helm_KoR_Mk6_VetSGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};
class Primaris_SM_KoR_Mk7_VetSGT: Primaris_SM_KoR_VetSGT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\alt2_Brother.p3d";
		displayName="[KoR] Primaris Mk7 (Veteran SGT)";
		uniformClass="Primaris_SM_KoR_Mk7_VetSGT_W";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_Mk7_VetSGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Vet",
			"Primaris_Helm_KoR_Mk7_VetSGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};
class Primaris_SM_KoR_BG_VetSGT: Primaris_SM_KoR_VetSGT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Bladeguard_Brother.p3d";
		displayName="[KoR] Primaris Bladeguard (Veteran SGT)";
		uniformClass="Primaris_SM_KoR_BG_VetSGT_W";
		backpack="Primaris_Dos_PP_KoR_2";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_BG_Vet",
			"Primaris_Helm_KoR_BG_VetSGT",
			"Flag_KoR_FW",
			"KoR_Banner_1_1_NVG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_BG_Vet",
			"Primaris_Helm_KoR_BG_VetSGT",
			"Flag_KoR_FW",
			"KoR_Banner_1_1_NVG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Steve_Ryza_Pistol_Banner",
			"Web_Melee_PS_5"
		};
		magazines[]=
		{
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Steve_Ryza_Pistol_Banner",
			"Web_Melee_PS_5"
		};
		respawnMagazines[]=
		{
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};
class Primaris_SM_KoR_Reiver_VetSGT: Primaris_SM_KoR_VetSGT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Phobos_Reiver.p3d";
		displayName="[KoR] Primaris Reiver (Veteran SGT)";
		uniformClass="Primaris_SM_KoR_Reiver_VetSGT_W";
		backpack="Primaris_Dos_PP_KoR_5";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_RV_VetSGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_RV_VetSGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};
class Primaris_SM_KoR_Infil_VetSGT: Primaris_SM_KoR_VetSGT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Infiltrator (Veteran SGT)";
		uniformClass="Primaris_SM_KoR_Infil_VetSGT_W";
		backpack="Primaris_Dos_PP_KoR_6";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_Infil_VetSGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_Vet",
			"Primaris_Helm_KoR_Infil_VetSGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};

class Primaris_SM_KoR_2: Primaris_SM_KoR_1
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\alt1_Brother.p3d";
		displayName="[KoR] Primaris Mk6";
		uniformClass="Primaris_SM_KoR_2_W";
		linkedItems[]=
		{
			"Primaris_Vest_40K_KoR_2",
			"Primaris_Helm_KoR_2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40K_KoR_2",
			"Primaris_Helm_KoR_2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};
class Primaris_SM_KoR_3: Primaris_SM_KoR_1
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\alt2_Brother.p3d";
		displayName="[KoR] Primaris Mk7";
		uniformClass="Primaris_SM_KoR_3_W";
		linkedItems[]=
		{
			"Primaris_Vest_40K_KoR_1",
			"Primaris_Helm_KoR_3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40K_KoR_1",
			"Primaris_Helm_KoR_3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};
class Primaris_SM_KoR_4: TIOW_Tactical_BT_3
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		model="Project_Primaris_D_Main\Models\LT_Brother.p3d";
		displayName="[KoR] Primaris LT";
		uniformClass="Primaris_SM_KoR_4_W";
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		backpack="Primaris_Dos_PP_KoR_1";
		linkedItems[]=
		{
			"Primaris_Vest_40K_KoR_3",
			"Primaris_Helm_KoR_RF_LT",
			"KoR_Cape_FW_White",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40K_KoR_3",
			"Primaris_Helm_KoR_RF_LT",
			"KoR_Cape_FW_White",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
		weapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		magazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		respawnMagazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};
class Primaris_SM_KoR_5: Primaris_SM_KoR_1
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Bladeguard_Brother.p3d";
		displayName="[KoR] Primaris Bladeguard (Mk10)";
		uniformClass="Primaris_SM_KoR_5_W";
		backpack="Primaris_Dos_PP_KoR_2";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_BG_Vet",
			"Primaris_Helm_KoR_4",
			"Flag_KoR_FW",
			"KoR_Banner_1_1_NVG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_BG_Vet",
			"Primaris_Helm_KoR_4",
			"Flag_KoR_FW",
			"KoR_Banner_1_1_NVG",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Steve_Ryza_Pistol_Banner",
			"Web_Melee_PS_5"
		};
		magazines[]=
		{
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Steve_Ryza_Pistol_Banner",
			"Web_Melee_PS_5"
		};
		respawnMagazines[]=
		{
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"Steve_SM_PlasmaPistol_Mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};
class Primaris_SM_KoR_6: Primaris_SM_KoR_1
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Phobos_Reiver.p3d";
		displayName="[KoR] Primaris Reiver (Mk10)";
		uniformClass="Primaris_SM_KoR_6_W";
		backpack="Primaris_Dos_PP_KoR_5";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_CS",
			"Primaris_Helm_KoR_6",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_CS",
			"Primaris_Helm_KoR_6",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_C_Bolt_Rifle"
		};
		magazines[]=
		{
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_C_Bolt_Rifle"
		};
		respawnMagazines[]=
		{
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};
class Primaris_SM_KoR_7: Primaris_SM_KoR_1
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		model="Project_Primaris_D_Main\Models\Phobos_Infil.p3d";
		displayName="[KoR] Primaris Infiltrator (Mk10)";
		uniformClass="Primaris_SM_KoR_7_W";
		backpack="Primaris_Dos_PP_KoR_6";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_FS",
			"Primaris_Helm_KoR_7",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_Phobos_FS",
			"Primaris_Helm_KoR_7",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_C_Bolt_Rifle"
		};
		magazines[]=
		{
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_C_Bolt_Rifle"
		};
		respawnMagazines[]=
		{
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"Primaris_Dos_C_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};
class Primaris_SM_KoR_8: TIOW_Tactical_BT_3
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		model="Project_Primaris_D_Main\Models\Capt_Brother.p3d";
		displayName="[KoR] Primaris Captain";
		uniformClass="Primaris_SM_KoR_8_W";
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		backpack="Primaris_Dos_PP_KoR_3";
		linkedItems[]=
		{
			"Primaris_Vest_40K_KoR_8",
			"Primaris_Helm_KoR_BG_VetLT",
			"KoR_Cape_FW",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40K_KoR_8",
			"Primaris_Helm_KoR_BG_VetLT",
			"KoR_Cape_FW",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
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
		weapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		magazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Primaris_Dos_Bolt_Rifle"
		};
		respawnMagazines[]=
		{
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"Primaris_Dos_Bolt_RifleMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};

class KoR_Primaris_Apoth: CTR_Primaris_Unit_BT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		attendant = 1;
		ace_medical_medicClass = 2;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		uniformClass="CTR_MKX_Uniform_Apoth";
		displayName="[KoR] Primaris Apothecary (Mk10)";
		backpack="CTR_MKX_Powerpack_Apoth";
		hiddenSelectionsTextures[]=
		{
			"CTR_Armor\data\textures\Uniform\MKX_U_Apoth_CO.paa"
		};
		linkedItems[]=
		{
			"CTR_MKX_Helmet_Apoth",
			"KoR_Pauldrons_Apoth",
			"itemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnlinkedItems[]=
		{
			"CTR_MKX_Helmet_Apoth",
			"KoR_Pauldrons_Apoth",
			"itemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};

class KoR_Primaris_Tech: CTR_Primaris_Unit_BT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		ace_isEngineer = 2;
		canDeactivateMines = 1;
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		uniformClass="CTR_MKX_Uniform_Tech";
		displayName="[KoR] Primaris Techmarine (Mk10)";
		backpack="CTR_MKX_Powerpack_Tech";
		hiddenSelectionsTextures[]=
		{
			"CTR_Armor\data\textures\Uniform\MKX_U_Tech_CO.paa"
		};
		linkedItems[]=
		{
			"CTR_MKX_Helmet_Tech",
			"KoR_Pauldrons_Tech",
			"itemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnlinkedItems[]=
		{
			"CTR_MKX_Helmet_Tech",
			"KoR_Pauldrons_Tech",
			"itemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
	};

class KoR_Primaris_Chap: CTR_Primaris_Unit_BT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		uniformClass="CTR_MKX_Uniform_Chap";
		displayName="[KoR] Primaris Chaplain (MK10)";
		model="CTR_Armor\models\MKX_U_Chap.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"CTR_Armor\data\textures\Uniform\MKX_U_BT_co.paa",
			"CTR_Armor\data\textures\Uniform\Chaplainparts_co.paa",
			""
		};
		backpack="CTR_MKX_Powerpack_Chap";
		linkedItems[]=
		{
			"CTR_MKX_Helmet_Chap_Hood",
			"KoR_Pauldrons_Chap",
			"itemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnlinkedItems[]=
		{
			"CTR_MKX_Helmet_Chap_Hood",
			"KoR_Pauldrons_Chap",
			"itemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		class EventHandlers {
			Respawn = "[_this] spawn Chaplain_fnc_InitChap;";
		};

		class Attributes
		{

			class SpeedBuffAbility
			{
				displayName = "Speed Buff Power";
				tooltip = "Speed Buff chaplain ability";
				property = "speedbuffPower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitSpeedBuffVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class SpeedBuffCDAbility
			{
				displayName = "Speed Buff CD Timer";
				tooltip = "The cooldown length of the Speed Buff ability (in seconds)";
				property = "speedbuffCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitSpeedBuffCDVar'];";

				defaultValue = "600";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class AmmoBuffAbility
			{
				displayName = "Ammo Buff Power";
				tooltip = "Ammo Buff chaplain ability";
				property = "ammobuffPower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitAmmoBuffVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class AmmoBuffCDAbility
			{
				displayName = "Ammo Buff CD Timer";
				tooltip = "The cooldown length of the Ammo Buff ability (in seconds)";
				property = "ammobuffCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitAmmoBuffCDVar'];";

				defaultValue = "600";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class InvulnBuffAbility
			{
				displayName = "Invuln Buff Power";
				tooltip = "Invuln Buff chaplain ability";
				property = "invulnbuffPower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitInvulnBuffVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class InvulnBuffCDAbility
			{
				displayName = "Invuln Buff CD Timer";
				tooltip = "The cooldown length of the Invuln Buff ability (in seconds)";
				property = "invulnbuffCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitInvulnBuffCDVar'];";

				defaultValue = "600";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};
		};
	};

class KoR_Primaris_Lib: CTR_Primaris_Unit_BT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Primaris";
		uniformClass="CTR_MKX_Uniform_Lib";
		displayName="[KoR] Primaris Librarian (Mk10)";
		model="CTR_Armor\models\MKX_U_Lib.p3d";
		backpack="CTR_MKX_Powerpack_Lib";
		hiddenSelectionsTextures[]=
		{
			"CTR_Armor\data\textures\Uniform\MKX_U_Lib_CO.paa"
		};
		linkedItems[]=
		{
			"CTR_MKX_Helmet_Half_Lib_Hood",
			"KoR_Pauldrons_Lib",
			"itemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnlinkedItems[]=
		{
			"CTR_MKX_Helmet_Half_Lib_Hood",
			"KoR_Pauldrons_Lib",
			"itemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		class EventHandlers {
			Respawn = "[_this] spawn Librarian_fnc_InitLib;";
		};

		class Attributes
		{
			class VoidstrikeAbility
			{
				displayName = "Voidstrike Power";
				tooltip = "Voidstrike psyker ability";
				property = "VoidstrikePower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitVoidstrikeVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class VoidstrikeCDAbility
			{
				displayName = "Voidstrike CD Timer";
				tooltip = "The cooldown length of the Voidstrike ability (in seconds)";
				property = "VoidstrikeCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitVoidstrikeCDVar'];";

				defaultValue = "120";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class SmiteAbility
			{
				displayName = "Smite Power";
				tooltip = "Smite psyker ability";
				property = "smitePower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitSmiteVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class SmiteCDAbility
			{
				displayName = "Smite CD Timer";
				tooltip = "The cooldown length of the Smite ability (in seconds)";
				property = "smiteCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitSmiteCDVar'];";

				defaultValue = "600";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class TeleportAbility
			{
				displayName = "Gate of Infinity Power";
				tooltip = "Gate of Infinity psyker ability";
				property = "teleportPower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitTeleportVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class TeleportCDAbility
			{
				displayName = "Gate of Infinity CD Timer";
				tooltip = "The cooldown length of the Gate of Infinity ability (in seconds)";
				property = "TeleportCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitTeleportCDVar'];";

				defaultValue = "1800";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class ShieldAbility
			{
				displayName = "Force Dome Power";
				tooltip = "Force Dome psyker ability";
				property = "shieldPower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitShieldVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class ShieldCDAbility
			{
				displayName = "Force Dome CD Timer";
				tooltip = "The cooldown length of the Force Dome ability (in seconds)";
				property = "ShieldCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitShieldCDVar'];";

				defaultValue = "1200";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class PlasmaShotAbility
			{
				displayName = "Vortex of Doom Power";
				tooltip = "Vortex of Doom psyker ability";
				property = "plasmashotPower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitPlasmaShotVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class PlasmaShotCDAbility
			{
				displayName = "Vortex of Doom CD Timer";
				tooltip = "The cooldown length of the Vortex of Doom ability (in seconds)";
				property = "PlasmaShotCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitPlasmaShotCDVar'];";

				defaultValue = "1200";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class RainAbility
			{
				displayName = "Meteoric Rain Power";
				tooltip = "Meteoric Rain psyker ability";
				property = "rainPower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitRainVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class RainCDAbility
			{
				displayName = "Meteoric Rain CD Timer";
				tooltip = "The cooldown length of the Meteoric Rain ability (in seconds)";
				property = "RainCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitRainCDVar'];";

				defaultValue = "1200";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class HealTargetAbility
			{
				displayName = "Mend Power";
				tooltip = "Mend psyker ability";
				property = "HealTargetPower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitHealTargetVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class HealTargetCDAbility
			{
				displayName = "Mend CD Timer";
				tooltip = "The cooldown length of the Mend ability (in seconds)";
				property = "HealTargetCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitHealTargetCDVar'];";

				defaultValue = "600";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class HealGroupAbility
			{
				displayName = "Earth Blood Power";
				tooltip = "Earth Blood psyker ability";
				property = "HealGroupPower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitHealGroupVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class HealGroupCDAbility
			{
				displayName = "Earth Blood CD Timer";
				tooltip = "The cooldown length of the Earth Blood ability (in seconds)";
				property = "HealGroupCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitHealGroupCDVar'];";

				defaultValue = "1800";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class VeilofTimeAbility
			{
				displayName = "Veil of Time Power";
				tooltip = "Veil of Time psyker ability";
				property = "VeilofTimePower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitVeilofTimeVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class VeilofTimeCDAbility
			{
				displayName = "Veil of Time CD Timer";
				tooltip = "The cooldown length of the Veil of Time ability (in seconds)";
				property = "VeilofTimeCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitVeilofTimeCDVar'];";

				defaultValue = "2700";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};

			class MindControlAbility
			{
				displayName = "Mind Control Power";
				tooltip = "Mind Control psyker ability";
				property = "MindControlPower";
				control = "Checkbox";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitMindControlVar'];";

				defaultValue = "false";

				unique = 0;
				validate = "none";
				condition = "object";
				typeName = "BOOL";
			};

			class MindControlCDAbility
			{
				displayName = "Mind Control CD Timer";
				tooltip = "The cooldown length of the Mind Control ability (in seconds)";
				property = "MindControlCDPower";
				control = "Edit";

				expression = "[_this, _value] remoteExec ['Abilities_fnc_InitMindControlCDVar'];";

				defaultValue = "1200";

				unique = 0;
				validate = "number";
				condition = "object";
				typeName = "NUMBER";
			};
		};
	};
	
class WBK_DT_DOS_Redux;
class WBK_DT_DOS_Redux_Ven;
class WBK_DT_DOS_KoR: WBK_DT_DOS_Redux
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;	
		faction="KoR_SpaceMarines";	
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Dreadnaught";
		displayName="[KoR] Dreadnaught";
		hiddenSelections[]=
		{
			"Hull_Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\dreadnaught\Dread_KoR_CO.paa"
		};
		uniformClass="WBK_DT_DOR_U_KoR";
	};

class WBK_DT_DOR_KoR: WBK_DT_DOS_Redux
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Dreadnaught";
		displayName="[KoR] Dreadnaught Dorus";
		hiddenSelections[]=
		{
			"Hull_Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\dreadnaught\Dread_KOR_DORUS.paa"
		};
		uniformClass="WBK_DT_DOR_U_KoR";
	};

class WBK_DT_Ven_KoR: WBK_DT_DOS_Redux_Ven
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
		faction="KoR_SpaceMarines";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Dreadnaught";
		displayName="[KoR] Venerable Dreadnought";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX",
			"ItemGPS"
		};
		RespawnlinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX",
			"ItemGPS"
		};
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
		uniformClass="WBK_DT_VEN_U_KoR";
	};

class KoR_Gravis: TIOWSpaceMarine1
	{
		author = "Gigasus";
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;		
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Primaris";
		model = "\dmcls\dmcls_gravis\dmcls_Gravis.p3d";
		displayName = "[KoR] Gravis Armour";
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
		uniformClass = "KoR_gravis_W";
		moves = "CfgMovesMaleSpaceMarine";
		gestures = "CfgGesturesSpaceMarine";
		Items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		backpack = "KoR_gravisPowerpack";
		linkedItems[] = 
		{
			"ItemGPS",
			"KoR_gravisPauldrons",
			"KoR_gravis_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		RespawnlinkedItems[] = 
		{
			"ItemGPS",
			"KoR_gravisPauldrons",
			"KoR_gravis_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HOV_SW_VOX"
		};
		weapons[] = 
		{
			"Throw",
			"Put",
			"TIOW_GodwynBoltgun_1"
		};
		magazines[] = 
		{
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
		respawnweapons[] = 
		{
			"Throw",
			"Put",
			"TIOW_GodwynBoltgun_1"
		};
		respawnMagazines[] = 
		{
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_30rnd_GodwynBoltgunMag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_frag_grenade_mag",
			"TIOW_sm_krak_grenade_mag",
			"TIOW_sm_smoke_grenade_mag"
		};
	};

//Terminators
class KoR_Terminator : BT_ME 
	{
		author = "Gigasus";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "[KoR] Terminator";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubcat_Terminators";
        uniformClass = "KoR_Terminator_W";
        nakedUniform = "KoR_Terminator_W";
        model = "BT_Terminator\models\bt_terminator.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"KoR\Textures\terminators\bt_termi_co_b.paa"};
        linkedItems[] = {"KoR_TerminatorVest", "KoR_THelmet", "ItemMap", "ItemCompass", "ItemWatch", "HOV_SW_VOX", "ItemGPS"};
        respawnLinkedItems[] = {"KoR_TerminatorVest", "KoR_THelmet", "ItemMap", "ItemCompass", "ItemWatch", "HOV_SW_VOX", "ItemGPS"};
    };
class KoR_Terminator_Alt : BT_ME 
	{
		author = "Gigasus";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;		
        displayName = "[KoR] Terminator - Alt.";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubcat_Terminators";
        uniformClass = "KoR_Terminator2_W";
        nakedUniform = "KoR_Terminator2_W";
        model = "BT_Terminator\models\bt_terminator2.p3d";
        hiddenSelections[] = {"camo", "camo2"};
        hiddenSelectionsTextures[] = {"KoR\Textures\terminators\bt_termi_co_b.paa", "KoR\Textures\terminators\bt_termi2_co_b.paa"};
        linkedItems[] = {"KoR_TerminatorVest", "KoR_THelmet_Vet", "ItemMap", "ItemCompass", "ItemWatch", "HOV_SW_VOX"};
        respawnLinkedItems[] = {"KoR_TerminatorVest", "KoR_THelmet_Vet", "ItemMap", "ItemCompass", "ItemWatch", "HOV_SW_VOX"};
    };

class Primaris_SM_KoR_BL : Primaris_SM_KoR_1
	{
        author = "Brother-Veteran Stone";
        scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "[KoR] Primaris Battleline";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Tactical";

        identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

        uniformClass = "Primaris_SM_KoR_1_W";

        linkedItems[] = {"Primaris_Vest_40k_KoR_BL","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Primaris_Vest_40k_KoR_BL","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"Primaris_Dos_Bolt_Rifle"};
        respawnWeapons[] = {"Primaris_Dos_Bolt_Rifle"};

        magazines[] = {"Primaris_Dos_Bolt_RifleMag","Primaris_Dos_Bolt_RifleMag"};
        respawnMagazines[] = {"Primaris_Dos_Bolt_RifleMag","Primaris_Dos_Bolt_RifleMag"};

        backpack = "Primaris_Dos_PP_KoR_1";
	};

class Primaris_SM_KoR_CS : Primaris_SM_KoR_1 
	{
        author = "Brother-Veteran Stone";
        scope = 2;
        scopeCurator = 2;
		scopeArsenal =2;
        displayName = "[KoR] Primaris Close Support";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Close_Support";

        identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

        uniformClass = "Primaris_SM_KoR_1_W";

        linkedItems[] = {"Primaris_Vest_40k_KoR_CS","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Primaris_Vest_40k_KoR_CS","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CTR_Bolt_Carbine","Web_Melee_KnifeSM"};
        respawnWeapons[] = {"CTR_Bolt_Carbine","Web_Melee_KnifeSM"};

        magazines[] = {"CTR_Magazine_Sickle_2","CTR_Magazine_Sickle_2"};
        respawnMagazines[] = {"CTR_Magazine_Sickle_2","CTR_Magazine_Sickle_2"};

        backpack = "Primaris_Dos_PP_KoR_1";
	};

class Primaris_SM_KoR_FS : Primaris_SM_KoR_1 
	{
        author = "Brother-Veteran Stone";
        scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "[KoR] Primaris Fire Support (Heavy Bolter)";
        faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Fire_Support";

        identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

        uniformClass = "Primaris_SM_KoR_1_W";

        linkedItems[] = {"Primaris_Vest_40k_KoR_FS","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Primaris_Vest_40k_KoR_FS","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"TIOW_Mars_HeavyBolter"};
        respawnWeapons[] = {"TIOW_Mars_HeavyBolter"};

        magazines[] = {"TIOW_Mars_HeavyBolterMag_85rnd","TIOW_Mars_HeavyBolterMag_85rnd"};
        respawnMagazines[] = {"TIOW_Mars_HeavyBolterMag_85rnd","TIOW_Mars_HeavyBolterMag_85rnd"};

        backpack = "Primaris_Dos_PP_KoR_1";
	};

class Primaris_SM_KoR_FS_2 : Primaris_SM_KoR_1
	{
        author = "Brother-Veteran Stone";
        scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "[KoR] Primaris Fire Support (Desolution)";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Fire_Support";

        identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

        uniformClass = "Primaris_SM_KoR_1_W";

        linkedItems[] = {"Primaris_Vest_40k_KoR_FS","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Primaris_Vest_40k_KoR_FS","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CTR_Bolt_Rifle","BT_Desolation_Superkrak_Launcher"};
        respawnWeapons[] = {"CTR_Bolt_Rifle","BT_Desolation_Superkrak_Launcher"};

        magazines[] = {"CTR_Magazine_Sickle","BT_Desolation_Superkrak_Mag","CTR_Magazine_Sickle"};
        respawnMagazines[] = {"CTR_Magazine_Sickle","BT_Desolation_Superkrak_Mag","CTR_Magazine_Sickle"};

        backpack = "Primaris_Dos_PP_KoR_1";
	};

class Primaris_SM_KoR_FS_3 : Primaris_SM_KoR_1
	{
        author = "Brother-Veteran Stone";
        scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "[KoR] Primaris Fire Support (Eradicators)";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Fire_Support";

        identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

        uniformClass = "Primaris_SM_KoR_1_W";

        linkedItems[] = {"Primaris_Vest_40k_KoR_FS","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Primaris_Vest_40k_KoR_FS","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CTR_Melta_Rifle"};
        respawnWeapons[] = {"CTR_Melta_Rifle"};

        magazines[] = {"CTR_Flask_Melta_1","CTR_Flask_Melta_1"};
        respawnMagazines[] = {"CTR_Flask_Melta_1","CTR_Flask_Melta_1"};

        backpack = "Primaris_Dos_PP_KoR_1";
	};

class Primaris_SM_KoR_FS_4 : Primaris_SM_KoR_1
	{
        author = "Brother-Veteran Stone";
        scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "[KoR] Primaris Fire Support (Hellblasters)";
		faction="KoR_SpaceMarines";
    	editorCategory= "EdCategory_CustomChapter";
    	editorSubcategory="EdSubCat_Fire_Support";

        identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

        uniformClass = "Primaris_SM_KoR_1_W";

        linkedItems[] = {"Primaris_Vest_40k_KoR_FS","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"Primaris_Vest_40k_KoR_FS","Primaris_Helm_KoR_1","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CTR_Assault_Plasma_Incinerator"};
        respawnWeapons[] = {"CTR_Assault_Plasma_Incinerator"};

        magazines[] = {"CTR_Flask_Plasma_1","CTR_Flask_Plasma_1"};
        respawnMagazines[] = {"CTR_Flask_Plasma_1","CTR_Flask_Plasma_1"};

        backpack = "Primaris_Dos_PP_KoR_1";
	};

//Powerpacks
class TIOW_Mk4Powerpack_Ultra;
class CTR_Mk_X_Tacticus_Powerpack_BT;
class Bag_Base;
class Mk4Powerpack_Firstborn : TIOW_Mk4Powerpack_Ultra
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
    	author = "Gigasus";
    	displayName = "[KoR] Mk4 Powerpack";
		picture="\TIOW_SM\Icon\MK4Powerpack_ca.paa";
		model="\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[] =
   		{
      "KoR\Textures\powerpack\KoR_Power_Pack.paa"
    	};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Firstborn_Powerpacks="Mk4 Powerpack";
		};
		maximumLoad=800;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
  };
class Mk2Powerpack_KoR: TIOW_Mk4Powerpack_Ultra
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Gigasus";
		picture="\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName="[KoR] Mk2 Powerpack";
		model="\TIOW_Sm\Marine\Model\MK2_Powerpack.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\powerpack\KoR_Power_Pack.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Firstborn_Powerpacks="Mk2 Powerpack";
		};
		maximumLoad=800;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class Mk5Powerpack_KoR: TIOW_Mk4Powerpack_Ultra
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Gigasus";
		picture="\TIOW_SM\Icon\MK5Powerpack_ca.paa";
		displayName="[KoR] Mk5 Powerpack";
		model="\TIOW_Sm\Marine\Model\MK5_Powerpack.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\powerpack\KoR_Power_Pack.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Firstborn_Powerpacks="Mk5 Powerpack";
		};
		maximumLoad=800;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class Primaris_Dos_PP_KoR_1: TIOW_Mk4Powerpack_Ultra
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Primaris Mk10 Powerpack";
		model="Project_Primaris_D_Main\Models\Power_Pack_Main.p3d";
		hiddenSelections[]=
		{
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\armour\prim_armor_KoR_CO.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Primaris_Powerpacks="Mk10 Powerpack";
		};
		maximumLoad=800;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class Primaris_Dos_PP_KoR_2: Primaris_Dos_PP_KoR_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk10 Bladeguard";
		model="Project_Primaris_D_Main\Models\Power_Pack_BladeGuard.p3d";		
		maximumLoad=800;
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Primaris_Powerpacks="Bladeguard";
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class Primaris_Dos_PP_KoR_3: Primaris_Dos_PP_KoR_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk10 Captain";
		model="Project_Primaris_D_Main\Models\Power_Pack_Captain.p3d";		
		maximumLoad=800;
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Primaris_Powerpacks="Captain";
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class Primaris_Dos_PP_KoR_4: Primaris_Dos_PP_KoR_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk10 Phobos";
		model="Project_Primaris_D_Main\Models\Power_Pack_Phobos.p3d";		
		maximumLoad=800;
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Primaris_Powerpacks="Phobos";
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class Primaris_Dos_PP_KoR_5: Primaris_Dos_PP_KoR_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk10 Reiver";
		model="Project_Primaris_D_Main\Models\Power_Pack_Riever.p3d";	
		maximumLoad=800;
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Primaris_Powerpacks="Reiver";
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		AOD_isgravpack=1;
		AOD_canJump=1;
		AOD_jumpForceForward=20;
		AOD_jumpForceUp=5;
		AOD_jumpLimit=3;
		AOD_gravfuelstart=50;
		AOD_gravfuelmax=50;
		AOD_gravfuelconsumption=0.1;
		AOD_gravslowrate=1.25;
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class Primaris_Dos_PP_KoR_6: Primaris_Dos_PP_KoR_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk10 Infiltrator";
		model="Project_Primaris_D_Main\Models\Power_Pack_Infil.p3d";
		maximumLoad=800;
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Primaris_Powerpacks="Infiltrator";
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class Primaris_Dos_PP_KoR_7: Primaris_Dos_PP_KoR_1
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk10 Eliminators";
		model="Project_Primaris_D_Main\Models\Power_Pack_Eliminators.p3d";	
		maximumLoad=800;
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Primaris_Powerpacks="Eliminators";
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class KoR_MkX_Tacticus_Powerpack: CTR_Mk_X_Tacticus_Powerpack_BT
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		author="Gigasus";
		displayName="[KoR] MarkX Tacticus Powerpack";
		descriptionShort="";
		model="CTR_Armor\models\Powerpack_Tacticus.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\powerpack\Tacticus_Jump_co.paa"
		};
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Primaris_Powerpacks="Tacticus";
		};
		maximumLoad=1000;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class KoR_MkX_Intercessors_Jump_Pack: CTR_Mk_X_Tacticus_Powerpack_BT
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[KoR] Mk10 Intercessors Jump Pack";
		model="CTR_Armor\models\Jump_Pack_Intercessors.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\powerpack\Tacticus_Jump_co.paa",
			"KoR\Textures\powerpack\Intercessors_jump_co.paa"
		};
		maximumLoad=1000;
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Primaris_Powerpacks="Jump Pack";
		};
		AOD_isgravpack=1;
		AOD_canJump=1;
		AOD_jumpForceForward=20;
		AOD_jumpForceUp=5;
		AOD_jumpLimit=3;
		AOD_gravfuelstart=50;
		AOD_gravfuelmax=50;
		AOD_gravfuelconsumption=0.1;
		AOD_gravslowrate=1.25;
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
class KoR_gravisPowerpack: Bag_Base
	{
		author = "Gigasus";
		displayName = "[KoR] Gravis Powerpack";
		isbackpack = 1;
		reversed = 1;
		scopeArsenal = 0;
		scope = 0;
		model = "\dmcls\dmcls_gravis\dmcls_gravis_pack.p3d";		
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"KoR\Textures\armour\Gravis3_CO.paa"
		};		
		maximumLoad = 800;
		class XtdGearInfo
		{
			model="KoR_SpaceMarine_Powepack";
			Primaris_Powerpacks="Gravis";
		};
		mass = 20;		
		class TransportMagazines{};
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	};
class Steve_30k_Objectives;
class KoR_Flag: Steve_30k_Objectives
	{
		scope=2;
		scopeCurator=2;
		displayName="[KoR] Flag";
		model="Steve_30K_Cosmetics\Flag_Objectives\Loy_Flag.p3d";
		author="Gigasus";
		mapSize=100;
		editorCategory="Steve_30k_Flags";
		editorSubcategory="Steve_30k_Flags_1";
		hiddenSelections[]=
		{
			"FlagCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_Flag_CO.paa"
		};
	};

//Vehicles
class TIOW_SM_Rhino_UM;
class TIOW_SM_Vindicator_UM;
class TIOW_SM_Predator_UM;
class Thunderhawk_1_UM_TIOW;
class TIOW_UM_Tornado;
class TIOW_UM_Typhoon;
class TIOW_UM_Storm;
class TIOW_UM_Temp;
class TIOW_Drop_Pod_UM;
class PP_Speeder_1_UM;
class PP_DOS_Bike_Main_UM;
class SM_Rhino_KoR: TIOW_SM_Rhino_UM
	{
		scope=0;
		scopeArsenal=0;
		scopeCurator=0;
		side=1;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Rhino";
		crew="Firstborn_SM_KoR_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\TIOW_Rhino_Color_UMarines.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_Rhino_Int_co.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_rhinotracks_co.paa"
		};
	};
class SM_Vindicator_KoR: TIOW_SM_Vindicator_UM
	{
		scope=0;
		scopeArsenal=0;
		scopeCurator=0;
		side=1;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Vindicator";
		crew="Firstborn_SM_KoR_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\TIOW_Rhino_Color_UMarines.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_Rhino_Int_co.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_Rhinotracks_co.paa"
		};
	};
class SM_Predator_KoR: TIOW_SM_Predator_UM
	{
		scope=0;
		scopeArsenal=0;
		scopeCurator=0;
		side=1;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Predator";
		crew="Firstborn_SM_KoR_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\TIOW_Rhino_Color_UMarines.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_Rhino_Int_co.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_Rhinotracks_co.paa"
		};
	};
class Thunderhawk_1_KoR: Thunderhawk_1_UM_TIOW
	{
		side=1;
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Thunderhawk Gunship";
		crew="Firstborn_SM_KoR_1";
		hiddenSelections[]=
		{
			"Hull_Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\Thawk_hull_UM_CO.paa"
		};
	};
class TIOW_KoR_Tornado: TIOW_UM_Tornado
	{
		side=1;
		scope=0;
		scopeCurator=0;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Land Speeder Tornado";
		crew="Firstborn_SM_KoR_1";
		hiddenSelections[]=
		{
			"LS_Hull"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\Speeder_UM_CO.paa"
		};
	};
class TIOW_KoR_Typhoon: TIOW_UM_Typhoon
	{
		side=1;
		scope=0;
		scopeCurator=0;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Land Speeder Typhoon";
		crew="Firstborn_SM_KoR_1";
		hiddenSelections[]=
		{
			"LS_Hull",
			"LS_Typhoon"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\Speeder_UM_CO.paa",
			"KoR\Textures\vehicles\Typhoon_BL_CO.paa"
		};
	};
class TIOW_KoR_Storm: TIOW_UM_Storm
	{
		side=1;
		scope=0;
		scopeCurator=0;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Land Speeder Storm";
		crew="Firstborn_SM_KoR_1";
		hiddenSelections[]=
		{
			"LS_Hull"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\Speeder_UM_CO.paa"
		};
	};
class TIOW_KoR_Temp: TIOW_UM_Temp
	{
		side=1;
		scope=0;
		scopeCurator=0;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Land Speeder Tempest";
		crew="Firstborn_SM_KoR_1";
		hiddenSelections[]=
		{
			"LS_Hull"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\LS_Tempest_UM_CO.paa"
		};
	};
class Drop_Pod_KoR: TIOW_Drop_Pod_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Drop Pod";
		crew="Firstborn_SM_KoR_1";
		hiddenSelections[]=
		{
			"Pod_Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\Drop_Pod_KoR_CO.paa"
		};
	};
class PP_DOS_Bike_Main_KoR: PP_DOS_Bike_Main_UM
	{
		scope=0;
		scopeArsenal=0;
		scopeCurator=0;
		side=1;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Primaris Attack Bike";
		crew="Primaris_SM_KoR_1";
		hiddenSelections[]=
		{
			"Bike_Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\PP_Bike_1_CO.paa"
		};
	};
class PP_Speeder_1_KoR: PP_Speeder_1_UM
	{
		scope=0;
		scopeArsenal=0;
		scopeCurator=0;
		side=1;
		faction="KoR_SpaceMarines";
		editorCategory="EdCategory_CustomChapter";
		editorSubcategory="EdSubcat_Vehicles";
		displayName="[KoR] Primaris Speeder";
		crew="Primaris_SM_KoR_1";
		hiddenSelections[]=
		{
			"Camo_1_NM",
			"Camo_2_M"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\vehicles\Speeder_Camo_CO.paa",
			"KoR\Textures\vehicles\Speeder_Mirror_CO.paa"
		};
	};
};
