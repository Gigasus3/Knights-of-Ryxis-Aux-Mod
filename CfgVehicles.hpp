class CfgVehicles
{

  //
  // #  Placeable Tact. Marines #
  //

    class TIOW_Tactical_SL_1; // MK 7

    class MK7_Tact_Standard: TIOW_Tactical_SL_1
    {
      author="Gigasus";
      displayName="Tact. Marine (Mk. VII)";
      editorCategory= "EdCategory_CustomChapter";
      editorSubcategory="EdSubCat_Standard";
      backpack="Mk4Powerpack_Standard";
      uniformClass="Mk7PowerArmor_Standard"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "KoR\Textures\Mk7_Armor_co.paa", // Link these to your own file path
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
  			"Mk7Limbs_Standard",
  			"MK7Helmet_Standard",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"ItemRadio"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Standard",
  			"MK7Helmet_Standard",
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

	class MK7_Tact_Test: TIOW_Tactical_SL_1
    {
      author="Gigasus";
      displayName="Tact. Marine (Test)";
      editorCategory= "EdCategory_CustomChapter";
      editorSubcategory="EdSubCat_Standard";
      backpack="Mk4Powerpack_Test";
      uniformClass="Mk7PowerArmor_Test"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "KoR\Textures\Mk7_Armor_test_co.paa", // Link these to your own file path
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
  			"Mk7Limbs_Test",
  			"MK7Helmet_Test",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"ItemRadio"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_Test",
  			"MK7Helmet_Test",
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

	class MK7_Tact_high: TIOW_Tactical_SL_1
    {
      author="Gigasus";
      displayName="Tact. Marine (high)";
      editorCategory= "EdCategory_CustomChapter";
      editorSubcategory="EdSubCat_Standard";
      backpack="Mk4Powerpack_HighLum";
      uniformClass="Mk7PowerArmor_high"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "KoR\Textures\Mk7_Armor_highsat_co.paa", // Link these to your own file path
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
  			"Mk7Limbs_high",
  			"MK7Helmet_Test",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"ItemRadio"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_high",
  			"MK7Helmet_Test",
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

	class MK7_Tact_low: TIOW_Tactical_SL_1
    {
      author="Gigasus";
      displayName="Tact. Marine (low)";
      editorCategory= "EdCategory_CustomChapter";
      editorSubcategory="EdSubCat_Standard";
      backpack="Mk4Powerpack_low";
      uniformClass="Mk7PowerArmor_low"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "KoR\Textures\Mk7_Armor_lowsat_co.paa", // Link these to your own file path
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
  			"Mk7Limbs_low",
  			"MK7Helmet_Test",
  			"ItemMap",
  			"ItemCompass",
  			"ItemWatch",
  			"ItemRadio"
  		};
  		RespawnlinkedItems[]=
  		{
  			"ItemGPS",
  			"Mk7Limbs_low",
  			"MK7Helmet_Test",
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
    
    class TIOW_Mk4Powerpack_Ultra;
    class Mk4Powerpack_Standard : TIOW_Mk4Powerpack_Ultra
  {
    author = "Gigasus";
    displayName = "Mk 4 Powerpack (Standard)";
		hiddenSelectionsTextures[] =
    {
      "KoR\Textures\Standard_Mk4Powerpack_co.paa"
    };
  };

  class Mk4Powerpack_Test : TIOW_Mk4Powerpack_Ultra
  {
    author = "Gigasus";
    displayName = "Mk 4 Powerpack (Test)";
		hiddenSelectionsTextures[] =
    {
      "KoR\Textures\KoR_Power_Pack_co.paa"
    };
  };

  class Mk4Powerpack_HighLum : TIOW_Mk4Powerpack_Ultra
  {
    author = "Gigasus";
    displayName = "Mk 4 Powerpack (High Lum)";
		hiddenSelectionsTextures[] =
    {
      "KoR\Textures\Mk4Powerpack_higherlum_co.paa"
    };
  };

  class Mk4Powerpack_low : TIOW_Mk4Powerpack_Ultra
  {
    author = "Gigasus";
    displayName = "Mk 4 Powerpack (low)";
		hiddenSelectionsTextures[] =
    {
      "KoR\Textures\Mk4Powerpack_lowsat_co.paa"
    };
  };
};