class CfgPatches
{
	
	class Retexture_Template //This should be the name of the folder that is Config.cpp is in, for this example it's "Retexture_Template". PLEASE RENAME THIS!
	{
		requiredAddons[]=
		{
			"A3_Data_F",
			"TIOWSpaceMarines",
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

class CfgEditorCategories
{
	class EdCategory_CustomChapter // Category class, you point to it in editorCategory property when creating your Zeus placeable unit
	{
  	displayName = "Knights of Ryxis"; // Name visible in the Zeus list
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_Standard // Subcategory that the unit will appear under, create as many as you'd like. Example: 1st Company, 2nd Company, etc...
	{
		displayName = "Standard";
	};
};

// Includes the CfgWeapons.hpp's Helmets, Power Armor, & Pauldrons code
#include "CfgWeapons.hpp"

// Includes the CfgVehicles.hpp's PowerPacks & Units code
#include "CfgVehicles.hpp"
