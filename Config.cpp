class CfgPatches
{
	
	class KoR_Rextures //This should be the name of the folder that is Config.cpp is in, for this example it's "Retexture_Template". PLEASE RENAME THIS!
	{
		requiredAddons[]=
		{
			"A3_Data_F",
			"TIOWSpaceMarines",
			"Project_Primaris_Dos",
		};
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]=
		{
		};
	};
};

//ACE Arsenal Extended configuration
#include<XtdGearModels.hpp>

class CfgMarkerClasses
{
    class 40k_markers_space_marines
	{
		displayName="40k - Space Marines";
    
    };

};
class CfgMarkers
{
    //SM
    class Knights_of_Ryxis
    {
        name="Knights of Ryxis";
        icon="KoR\Textures\dreadnaught\KoR_Dread.paa";
        color[]={0,0,0,1};
        size=80;
        shadow = 0;
        scope = 1;
        markerClass = "40k_markers_space_marines";
    };
};

class CfgFactionClasses
{
	class KoR_SpaceMarines
	{
		displayName="Knights of Ryxis";
		side=1;
		priority=2;
	};
};

class CfgEditorCategories
{
	class EdCategory_CustomChapter // Category class, you point to it in editorCategory property when creating your Zeus placeable unit
	{
  		displayName = "Knights of Ryxis"; // Name visible in the Zeus list
		side=1;
		priority=2;
	};
};

class CfgEditorSubcategories
{
	class EdSubCat_Firstborn // Subcategory that the unit will appear under, create as many as you'd like. Example: 1st Company, 2nd Company, etc...
	{
		displayName = "1st Company Firstborn";
	};
	class EdSubCat_Primaris // Subcategory that the unit will appear under, create as many as you'd like. Example: 1st Company, 2nd Company, etc...
	{
		displayName = "1st Company Primaris";
	};
	class EdSubCat_Tactical // Subcategory that the unit will appear under, create as many as you'd like. Example: 1st Company, 2nd Company, etc...
	{
		displayName = "Tactical";
	};
	class EdSubCat_Close_Support // Subcategory that the unit will appear under, create as many as you'd like. Example: 1st Company, 2nd Company, etc...
	{
		displayName = "Close Support";
	};
	class EdSubCat_Fire_Support // Subcategory that the unit will appear under, create as many as you'd like. Example: 1st Company, 2nd Company, etc...
	{
		displayName = "Fire Support";
	};
	class EdSubcat_Terminators // Subcategory that the unit will appear under, create as many as you'd like. Example: 1st Company, 2nd Company, etc...
	{
		displayName = "1st Company Terminators";
	};
	class EdSubcat_Dreadnaught // Subcategory that the unit will appear under, create as many as you'd like. Example: 1st Company, 2nd Company, etc...
	{
		displayName = "1st Company Dreadnaughts";
	};
	class EdSubcat_Vehicles
	{
		displayName = "Vehicles";
	};
};

// Includes the CfgWeapons.hpp's Helmets, Power Armor, & Pauldrons code
#include "CfgWeapons.hpp"

// Includes the CfgVehicles.hpp's PowerPacks & Units code
#include "CfgVehicles.hpp"


class CfgGlasses
{
	class None;
	class Flag_KoR_SGT_FW: None
	{
		author="Gigasus";
		showEmpty=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayname="[KoR] SGT Flag Facewear";
		model="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
		hiddenSelections[]=
		{
			"FlagCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_SGT_Flag_CO.paa"
		};
		identityTypes[]={};
	};
	class Flag_KoR_SGT_1_FW: None
	{
		author="Gigasus";
		showEmpty=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayname="[KoR] SGT Gladius Flag";
		model="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
		hiddenSelections[]=
		{
			"FlagCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_SGT_1_Flag_CO.paa"
		};
		identityTypes[]={};
	};
	class Flag_KoR_SGT_2_FW: None
	{
		author="Gigasus";
		showEmpty=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayname="[KoR] SGT Hammerdown Flag";
		model="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
		hiddenSelections[]=
		{
			"FlagCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_SGT_2_Flag_CO.paa"
		};
		identityTypes[]={};
	};
	class Flag_KoR_SGT_3_FW: None
	{
		author="Gigasus";
		showEmpty=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayname="[KoR] SGT Cataphracti Flag";
		model="Steve_30K_Cosmetics\Models\SGT_Flag_1.p3d";
		hiddenSelections[]=
		{
			"FlagCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_SGT_3_Flag_CO.paa"
		};
		identityTypes[]={};
	};
	class Flag_KoR_FW: None
	{
		author="Gigasus";
		showEmpty=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayname="[KoR] Flag Facewear";
		model="Steve_30K_Cosmetics\Models\Flag_1.p3d";
		hiddenSelections[]=
		{
			"FlagCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\flag.banners\KoR_Flag_CO.paa"
		};
		identityTypes[]={};
	};
	class DBA_New_Cape;
	class DBA_Praetor_Addon_Capeless;
	class DBA_Praetor_Addon;
	class DBA_Praetor_Addon_Halo;
	class DBA_Praetor_Addon2_Halo;
	class KoR_Cape_FW: DBA_New_Cape
	{
		displayName="[KoR] Officer Cape";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model="BA_Pauldrons\Batabard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\cosmetics\KoR_Command_Cape.paa"
		};
	};
	class KoR_Cape_FW_White: DBA_New_Cape
	{
		displayName="[KoR] Officer Cape (White)";
		author = "Gigasus";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model="BA_Pauldrons\Batabard.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"KoR\Textures\cosmetics\KoR_Command_Cape_white.paa"
		};
	};
	class KoR_Praetor_Cape_FW: DBA_Praetor_Addon
	{
		displayName="[KoR] Praetor & Officer Cape";
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
	class KoR_Praetor_Cape_FW_White: DBA_Praetor_Addon
	{
		displayName="[KoR] Praetor & Officer Cape (White)";
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
	class KoR_Praetor_Cape_Halo_Copper_FW: DBA_Praetor_Addon_Halo
	{
		displayName="[KoR] Praetor, Officer Cape & Copper Halo";
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
	class KoR_Praetor_Cape_Halo_Silver_FW: DBA_Praetor_Addon2_Halo
	{
		displayName="[KoR] Praetor, Officer Cape & Silver Halo";
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
	class KoR_Praetor_Cape_Halo_Gold_FW: DBA_Praetor_Addon2_Halo
	{
		displayName="[KoR] Praetor, Officer Cape & Gold Halo";
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
	class KoR_Praetor_Cape_Halo_Copper_FW_White: DBA_Praetor_Addon_Halo
	{
		displayName="[KoR] Praetor, Officer Cape & Copper Halo (White)";
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
	class KoR_Praetor_Cape_Halo_Silver_FW_White: DBA_Praetor_Addon2_Halo
	{
		displayName="[KoR] Praetor, Officer Cape & Silver Halo (White)";
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
	class KoR_Praetor_Cape_Halo_Gold_FW_White: DBA_Praetor_Addon2_Halo
	{
		displayName="[KoR] Praetor, Officer Cape & Gold Halo (White)";
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
};

class CfgMusic
{
	#include "FileListWithMusicTracks.hpp"
};
class CfgMusicClasses
{
	class KoRMusicMod
	{
		displayName = "Knights of Ryxis Music Mod";
	};
};