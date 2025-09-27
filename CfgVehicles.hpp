class CfgVehicles
{

  //
  // #  Placeable Tact. Marines #
  //

    class TIOW_Tactical_SL_1; // MK 7
	class TIOW_Tactical_BT_3;

    class Firstborn_SM_KoR_1: TIOW_Tactical_SL_1
    {
      author="Gigasus";
      displayName="[KoR] Firstborn Brother";
      editorCategory= "EdCategory_CustomChapter";
      editorSubcategory="EdSubCat_Standard";
      backpack="Mk4Powerpack_Firstborn";
      uniformClass="Mk7PowerArmor_Firstborn"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "KoR\Textures\fb_armor_KoR_CO.paa", // Link these to your own file path
        "KoR\Textures\SM_Body_co.paa"
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
  			"ItemRadio"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK7Helmet_BBFirstborn",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"ItemRadio"
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
      author="Gigasus";
      displayName="[KoR] Firstborn Brother Sergeant";
      editorCategory= "EdCategory_CustomChapter";
      editorSubcategory="EdSubCat_Standard";
      backpack="Mk4Powerpack_Firstborn";
      uniformClass="Mk7PowerArmor_VetFirstborn"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "KoR\Textures\fb_armor_KoR_CO.paa", // Link these to your own file path
        "KoR\Textures\SM_Body_co.paa"
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
  			"MK7Helmet_Brass_Firstborn",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"ItemRadio"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Firstborn",
  			"MK7Helmet_Brass_Firstborn",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"ItemRadio"
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
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="[KoR] Primaris Brother";
		uniformClass="Primaris_SM_KoR_1_W";
		editorCategory= "EdCategory_CustomChapter";
		editorSubcategory="EdSubCat_Standard";
		backpack="Primaris_Dos_PP_KoR_1";
		linkedItems[]=
		{
			"Primaris_Vest_40k_KoR_1",
			"Primaris_Helm_KoR_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		RespawnLinkedItems[]=
		{
			"Primaris_Vest_40k_KoR_1",
			"Primaris_Helm_KoR_1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
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

    class TIOW_Mk4Powerpack_Ultra;
    class Mk4Powerpack_Firstborn : TIOW_Mk4Powerpack_Ultra
  {
    author = "Gigasus";
    displayName = "[KoR] Firstborn Mk.4 Powerpack";
	picture="\TIOW_SM\Icon\MK4Powerpack_ca.paa";
	model="\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
	hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[] =
    {
      "KoR\Textures\KoR_Power_Pack.paa"
    };
		maximumLoad=500;
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
		displayName="[KoR] Primaris Mk.10 Powerpack";
		model="Project_Primaris_D_Main\Models\Power_Pack_Main.p3d";
		hiddenSelections[]=
		{
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\prim_armor_KoR_CO.paa"
		};
		maximumLoad=500;
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
};