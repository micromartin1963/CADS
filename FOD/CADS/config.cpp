#define _ARMA_

class CfgPatches
{
	class CADS
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class CADS
	{
		dir = "FOD";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "CADS";
		credits = "Myself And DumpyChicken";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"FOD/CADS/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"FOD/CADS/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"FOD/CADS/Scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class House;
	class HouseNoDestruct;
	class Lockpick;
	class PunchedCard;
	class Barrel_Blue;
	class Barrel_Green;
	class Barrel_Red;			

	class Barrel_FOD_Red: Barrel_Red
	{
	scope=2;	
	displayName="One Time open Barrel !";	
	};

	class Barrel_FOD_Blue: Barrel_Blue
	{
	scope=2;	
	displayName="One Time open Barrel !";		
	};



	class Barrel_FOD_Green: Barrel_Green
	{
	scope=2;	
	displayName="One Time open Barrel !";		
	};

	class Barrel_FOD_White: Barrel_Green
	{
	scope=2;
	displayName="One Time open Barrel !";		
	hiddenSelectionsTextures[]={"FOD\CADS\data\white_barrel.paa"};	
	};		

	class PunchedCard_FOD_RED: Lockpick
	{
	scope=2;	
	displayName="Red Access Card";		
	model="FOD\CADS\models\AccessCard_red.p3d";
	weight=10;
	itemSize[]={2,1};
	};

	class PunchedCard_FOD_GREEN: Lockpick
	{
	scope=2;
	displayName="Green Access Card";			
	model="FOD\CADS\models\AccessCard_green.p3d";
	weight=10;
	itemSize[]={2,1};
	};


	class PunchedCard_FOD_BLUE: Lockpick
	{
	scope=2;
	displayName="Blue Access Card";			
	model="FOD\CADS\models\AccessCard_blue.p3d";
	weight=10;
	itemSize[]={2,1};
	};


	class PunchedCard_FOD_WHITE: Lockpick
	{
	scope=2;
	displayName="White Access Card";			
	model="FOD\CADS\models\AccessCard_white.p3d";
	weight=10;
	itemSize[]={2,1};
	};

	class dayz_house_test1 : HouseNoDestruct   // green
	{
		scope=1;
		model="FOD\CADS\models\dayz_house_test1.p3d";	
		class Doors
		{
			class Door1
			{
				displayName = "Shed door";
				component = "door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
			class Door2
			{
				displayName = "Shed door 2";
				component = "door2";
				soundPos = "door2_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
			class Door3
			{
				displayName = "Shed door 3";
				component = "door3";
				soundPos = "door3_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};			
		};

	};
	class dayz_house_test2 : HouseNoDestruct   // red
	{
		scope=1;
		model="FOD\CADS\models\dayz_house_test2.p3d";	
		class Doors
		{
			class Door1
			{
				displayName = "Shed door";
				component = "door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
			class Door2
			{
				displayName = "Shed door 2";
				component = "door2";
				soundPos = "door2_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
			class Door3
			{
				displayName = "Shed door 3";
				component = "door3";
				soundPos = "door3_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};			
		};

	};	
	class dayz_house_test3 : HouseNoDestruct
	{
		scope=1;
		model="FOD\CADS\models\dayz_house_test3.p3d";	// Blue
		class Doors
		{
			class Door1
			{
				displayName = "Shed door";
				component = "door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
			class Door2
			{
				displayName = "Shed door 2";
				component = "door2";
				soundPos = "door2_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
			class Door3
			{
				displayName = "Shed door 3";
				component = "door3";
				soundPos = "door3_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};			
		};

	};	

	class dayz_house_test4 : HouseNoDestruct   // white
	{
		scope=1;
		model="FOD\CADS\models\dayz_house_test4.p3d";	
		class Doors
		{
			class Door1
			{
				displayName = "Shed door";
				component = "door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
			class Door2
			{
				displayName = "Shed door 2";
				component = "door2";
				soundPos = "door2_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
			class Door3
			{
				displayName = "Shed door 3";
				component = "door3";
				soundPos = "door3_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};			
		};

	};			
};





//- Sounds -------------------------------------------
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class FOD_SoundShader1: baseCharacter_SoundShader
	{
		samples[] = {{"FOD\CADS\sounds\teleport",1}};
		volume = 1;
		range = 60;
		rangeCurve[] = {{0,1},{0.5,0.7},{1,0}};
	};
};

class CfgSoundSets
{
	//class baseCharacter_SoundSet;
	class FOD_SoundSet_300001			//teleport
	{
		soundShaders[] = {"FOD_SoundShader1"};
	};
};

