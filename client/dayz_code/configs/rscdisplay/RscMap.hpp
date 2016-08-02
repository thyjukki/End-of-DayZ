class RscDisplayMainMap
{
	class controls
	{
		delete CA_DiaryIndex;
		delete CA_MainBackground;
		delete CA_CurrentTaskLabel;
		delete CA_CurrentTask;
		delete CA_PlayerName;
		delete CA_TopicsBackground;
		delete CA_PlayerRank;
		delete CA_MissionName;
		delete DiaryPage;
		delete DiaryTitle;
		delete DiaryBackground;
		
		delete CA_SubTopicsBackground;
		delete CA_ContentBackground;
		class CA_DiaryGroup : RscControlsGroup
		{
			y = "(109.5/100) * SafeZoneH + SafeZoneY"; //hide
			x=0;
			w=0;
			h=0;
			
			class Controls
			{
				class CA_Diary : RscHTML
				{
					y = "(109.5/100) * SafeZoneH + SafeZoneY"; //hide
				};
			};
			
		};
		
		
		class DiaryList: RscIGUIListBox
		{
			idc = 1001;
			colorText[] = {0.30,0.30,0.30,1};
			colorSelectBackground[]={0.60,0.60,0.60,1};
			colorSelectBackground2[]={0.60,0.60,0.60,1};
			onLBSelChanged = " [ _this select 0 , _this select 1 , 'List' ] call compile preprocessFileLineNumbers 'ca\Warfare2\Scripts\Client\GUI\GUI_logEH.sqf'; ";
			onLoad = "((_this select 0) displayCtrl 1001) ctrlShow false";
			default = 1;
			w = "0";
			h = "0";
		};
	};
};