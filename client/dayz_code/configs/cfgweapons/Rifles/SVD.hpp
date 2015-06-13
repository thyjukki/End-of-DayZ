class SVD_DZ : SVD
{
	magazines[]=
	{
		"762x54_x1",
		"762x54_HP_x1",
		"762x54_TRACER_x1",
		"762x54_RUBBER_x1",
		"762x54_BT_x1",
		"10Rnd_762x54_SVD",
		"10Rnd_762x54_SVD_hp",
		"10Rnd_762x54_SVD_tracer",
		"10Rnd_762x54_SVD_rubber",
		"10Rnd_762x54_SVD_bt"
	};
	
	reloadTime = 0.06;
	
	recoil = "recoil_single_primary_4outof10";
	recoilProne = "recoil_single_primary_prone_4outof10";
	
	dispersion = 0.00045;
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_Ghillie"
		};
		
		Attachment_Ghillie = "SVD_Gh_DZ";
	};
};

class SVD_Gh_DZ : SVD_DZ
{
	model = "ca\weapons\svd_camo.p3d";
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'SVD_DZ'] call player_removeAttachment";
		};
	};
};