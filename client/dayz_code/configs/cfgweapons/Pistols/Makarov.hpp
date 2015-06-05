class Makarov : Pistol {
	class ItemActions {
		class UseAtt{
			isAttachment = 1;
			script = "spawn player_useAttchment;";
			text = "Attach Silencer";
			att = "Attachment_Sup9";
			out = "MakarovSD";
		};
	};

	magazines[]={
		"8Rnd_9x18_Makarov",
		"8Rnd_9x18_MakarovSD",
		"8Rnd_9x18_Makarov_hp",
		"8Rnd_9x18_Makarov_tracer",
		"8Rnd_9x18_Makarov_rubber",
		"8Rnd_9x18_Makarov_bt"
	};
};

class MakarovSD : Makarov {
	class ItemActions {
		class UseAtt{
			isAttachment = 1;
			script = "spawn player_removeAttchment;";
			text = "Detach Silencer";
			att = "Attachment_Sup9";
			out = "Makarov";
		};
	};
};