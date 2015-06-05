class Sa58P_EP1: Rifle {
	magazines[] = {"30Rnd_762x39_AK47", "RH_30Rnd_762x39_SDmag"};
};

class Sa58V_EP1: Sa58P_EP1 {
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_useAttchment;";
				text = "Attach Aimpoint";
				att = "AttAimpoint";
				out = "Sa58V_CCO_EP1";
			};
			class UseAtt1 : UseAtt{
				text = "Attach Acog";
				att = "AttAcog";
				out = "Sa58V_RCO_EP1";
			};
		};
};

class Sa58V_CCO_EP1: Sa58V_EP1 {
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Aimpoint";
				att = "AttAimpoint";
				out = "Sa58V_EP1";
			};
		};
};

class Sa58V_RCO_EP1: Sa58V_EP1 {
		class ItemActions {
			class UseAtt{
				isAttachment = 1;
				script = "spawn player_removeAttchment;";
				text = "Detach Acog";
				att = "AttAcog";
				out = "Sa58V_EP1";
			};
		};
};