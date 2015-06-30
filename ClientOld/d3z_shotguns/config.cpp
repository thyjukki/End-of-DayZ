class CfgPatches
{
	class d3z_shotguns
	{
		units[]={};
		weapons[]=
		{
			"d3z_lanber",
			"d3z_maxus"
		};
		requiredVersion=1.530000;
		version=1.000000;
	};
};
class cfgrecoils
{
	recoil_shotgun[]=
	{
		0.040000,
		"0.006*(  (9/7))",
		"0.05*.5*(  (9/7))",
		0.040000,
		"0.006*(  (9/7))",
		"0.05*.5*(  (9/7))"
	};
};
class CfgWeaponCursors
{
	class Cannon;
	class ShotgunCursor: Cannon
	{
		texture="\ca\ui\Data\cursor_circle_ca.paa";
		color[]={0.600000,0.839200,0.470600,1};
		shadowEnabled=1;
	};
};