private["_item","_newweapon","_primweapon","_hasattachment","_onLadder"];
_item = _this;
_newweapon = 0;
call gear_ui_init;
_onLadder =	(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;

if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};

_hasattachment = _this in magazines player;
_primweapon	= primaryWeapon player;

if (_primweapon == "RH_ar10") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_ar10s";
	};
};
if (_primweapon == "RH_m4") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4eotech";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4aim";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4gl";
	};
};
if (_primweapon == "RH_m4acog") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4glacog";
	};
};
if (_primweapon == "RH_m4eotech") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4gleotech";
	};
};
if (_primweapon == "RH_m4aim") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4glaim";
	};
};
if (_primweapon == "RH_m4gl") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4glacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4gleotech";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4glaim";
	};
};

//M4a1
if (_primweapon == "RH_m4a1") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4a1acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4a1eotech";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4a1aim";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sd";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_M4a1gl";
	};
};
if (_primweapon == "RH_M4a1gl") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_M4a1glacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_M4a1gleotech";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_M4a1glaim";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdgl";
	};
};
if (_primweapon == "RH_m4sd") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdeotech";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdaim";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdgl";
	};
};
if (_primweapon == "RH_m4sdgl") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdglacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdgleotech";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdglaim";
	};
};
if (_primweapon == "RH_m4a1acog") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdacog";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4a1glacog";
	};
};
if (_primweapon == "RH_m4a1aim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdaim";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4a1glaim";
	};
};
if (_primweapon == "RH_m4a1eotech") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdeotech";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4a1gleotech";
	};
};
if (_primweapon == "RH_m4sdacog") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdglacog";
	};
};
if (_primweapon == "RH_m4sdaim") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdglaim";
	};
};
if (_primweapon == "RH_m4sdeotech") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdgleotech";
	};
};
if (_primweapon == "RH_M4a1glacog") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdglacog";
	};
};
if (_primweapon == "RH_M4a1glaim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdglaim";
	};
};
if (_primweapon == "RH_M4a1gleotech") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sdgleotech";
	};
};

if (_primweapon == "RH_m4m") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4macog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4meotech";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4maim";
	};
};

if (_primweapon == "RH_m4sbr") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sbracog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sbreotech";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m4sbraim";
	};
};

if (_primweapon == "RH_m16a2") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a2gl";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a2s";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a2aim";
	};
};
if (_primweapon == "RH_m16a2gl") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a2sgl";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a2glaim";
	};
};
if (_primweapon == "RH_m16a2s") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a2sgl";
	};
};
if (_primweapon == "RH_m16a2aim") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a2sgl";
	};
};

if (_primweapon == "RH_m16a3") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a3gl";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a3s";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a3aim";
	};
};
if (_primweapon == "RH_m16a3gl") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a3sgl";
	};
};
if (_primweapon == "RH_m16a3s") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a3sgl";
	};
};


if (_primweapon == "RH_m16a4") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a4gl";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a4acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a4eotech";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a4aim";
	};
};
if (_primweapon == "RH_m16a4gl") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a4glacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a4gleotech";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a4glaim";
	};
};
if (_primweapon == "RH_m16a4acog") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a4glacog";
	};
};
if (_primweapon == "RH_m16a4eotech") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a4gleotech";
	};
};
if (_primweapon == "RH_m16a4aim") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m16a4glaim";
	};
};

if (_primweapon == "RH_mk12") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mk12sd";
	};
};


//M14
if (_primweapon == "RH_m14") then {
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m14acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m14eot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m14aim";
	};
	if (_item == "AttScope") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_m21";
	};
};

//RH SMG PACK

//MP5
if (_primweapon == "RH_mp5a5") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5eot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5aim";
	};
	if (_item == "AttGrip") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5ris";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5sd6";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5eod";
	};
};
if (_primweapon == "RH_mp5a5ris") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5riseot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5risaim";
	};
};
if (_primweapon == "RH_mp5a5eod") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5eodeot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5eodaim";
	};
};
if (_primweapon == "RH_mp5a5aim") then {
	if (_item == "AttGrip") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5risaim";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5sd6aim";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5eodaim";
	};
};
if (_primweapon == "RH_mp5a5eot") then {
	if (_item == "AttGrip") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5riseot";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5sd6eot";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_mp5a5eodeot";
	};
};

//HK53
if (_primweapon == "RH_HK53") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_HK53eot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_HK53aim";
	};
};

//P90
if (_primweapon == "RH_p90i") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_P90eot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_p90aim";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_P90isd";
	};
};
if (_primweapon == "RH_P90isd") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_p90sdeot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_p90sdaim";
	};
};
if (_primweapon == "RH_P90eot") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_p90sdeot";
	};
};
if (_primweapon == "RH_p90aim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_p90sdaim";
	};
};

if (_primweapon == "RH_ump") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_umpeot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_umpaim";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_umpsd";
	};
};
if (_primweapon == "RH_umpsd") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_umpsdeot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_umpsdaim";
	};
};
if (_primweapon == "RH_umpeot") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_umpsdeot";
	};
};
if (_primweapon == "RH_umpaim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_umpsdaim";
	};
};

if (_primweapon == "RH_kriss") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_krisseot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_krissaim";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_krisssd";
	};
};
if (_primweapon == "RH_krisssd") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_krisssdeot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_krisssdaim";
	};
};
if (_primweapon == "RH_krisseot") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_krisssdeot";
	};
};
if (_primweapon == "RH_krissaim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_krisssdaim";
	};
};

if (_primweapon == "RH_tmp") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_tmpeot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_tmpaim";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_tmpsd";
	};
};
if (_primweapon == "RH_tmpsd") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_tmpsdeot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_tmpsdaim";
	};
};
if (_primweapon == "RH_tmpeot") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_tmpsdeot";
	};
};
if (_primweapon == "RH_tmpaim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_tmpsdaim";
	};
};

if (_primweapon == "C1987_MP7_t") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "C1987_MP7_eot_t";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "C1987_MP7_aim_t";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "C1987_MP7_acog_t";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "C1987_MP7_sd_t";
	};
};
if (_primweapon == "C1987_MP7_sd_t") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "C1987_MP7_eot_sd_t";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "C1987_MP7_aim_sd_t";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "C1987_MP7_acog_sd_t";
	};
};
if (_primweapon == "C1987_MP7_eot_t") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "C1987_MP7_eot_sd_t";
	};
};
if (_primweapon == "C1987_MP7_aim_t") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "C1987_MP7_aim_sd_t";
	};
};
if (_primweapon == "C1987_MP7_acog_t") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "C1987_MP7_acog_sd_t";
	};
};

if (_primweapon == "RH_uzi") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_uzisd";
	};
};

if (_primweapon == "RH_pp2000") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_pp2000eot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_pp2000aim";
	};
};

if (_primweapon == "RH_pdr") then {
	if (_item == "AttHolo") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_pdreot";
	};
	if (_item == "AttAimpoint") then {
		_newweapon = 1; player removeWeapon _primweapon;
		player addWeapon "RH_pdraim";
	};
};



//SA-58
if (_primweapon == "Sa58V_EP1") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "Sa58V_CCO_EP1";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "Sa58V_RCO_EP1";
	};
};


//Famas pack
if (_primweapon == "R3F_Famas_G2") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "R3F_Famas_G2_AIM_HG";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "R3F_Famas_G2_EOT";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "R3F_Famas_G2_J4_HG";
	};
};

//G3 pack
if (_primweapon == "C1987_G3") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "C1987_G3_aimshot";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "C1987_G3_acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "C1987_G3_eotech";
	};
	if (_item == "AttScope") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "C1987_G3SG1";
	};
};

//AK PACK

//AK-103
if (_primweapon == "RH_ak103") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak103k";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak103sp";
	};
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak103gl";
	};
};

if (_primweapon == "RH_ak103gl") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak103kgl";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak103glsp";
	};
};

if (_primweapon == "RH_ak103k") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak103kgl";
	};
};

if (_primweapon == "RH_ak103sp") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak103glsp";
	};
};

//AK-104
if (_primweapon == "RH_ak104") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak104k";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak104sp";
	};
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak104gl";
	};
};

if (_primweapon == "RH_ak104gl") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak104kgl";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak104glsp";
	};
};

if (_primweapon == "RH_ak104k") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak104kgl";
	};
};

if (_primweapon == "RH_ak104sp") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak104glsp";
	};
};

//AK-105
if (_primweapon == "RH_ak105") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak105k";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak105sp";
	};
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak105gl";
	};
};

if (_primweapon == "RH_ak105gl") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak105kgl";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak105glsp";
	};
};

if (_primweapon == "RH_ak105k") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak105kgl";
	};
};

if (_primweapon == "RH_ak105sp") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak105glsp";
	};
};

//AK-107
if (_primweapon == "RH_ak107") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak107k";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak107sp";
	};
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak107gl";
	};
};

if (_primweapon == "RH_ak107gl") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak107kgl";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak107glsp";
	};
};

if (_primweapon == "RH_ak107k") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak107kgl";
	};
};

if (_primweapon == "RH_ak107sp") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak107glsp";
	};
};

//AK-74
if (_primweapon == "RH_ak74") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74k";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74sp";
	};
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74gl";
	};
};

if (_primweapon == "RH_ak74k") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74kgl";
	};
};

if (_primweapon == "RH_ak74gl") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74kgl";
	};
};



//AK-74m
if (_primweapon == "RH_ak74m") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74mk";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74msp";
	};
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74mgl";
	};
};

if (_primweapon == "RH_ak74mgl") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74mkgl";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74mglsp";
	};
};

if (_primweapon == "RH_ak74mk") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74mkgl";
	};
};

if (_primweapon == "RH_ak74msp") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_ak74mglsp";
	};
};

//AKS-74
if (_primweapon == "RH_aks74") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74k";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74sp";
	};
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74gl";
	};
};

if (_primweapon == "RH_aks74k") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74kgl";
	};
};

if (_primweapon == "RH_aks74gl") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74kgl";
	};
};


//AKS-74m
if (_primweapon == "RH_aks74m") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74mk";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74msp";
	};
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74mgl";
	};
};

if (_primweapon == "RH_aks74mgl") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74mkgl";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74mglsp";
	};
};

if (_primweapon == "RH_aks74mk") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74mkgl";
	};
};

if (_primweapon == "RH_aks74msp") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74mglsp";
	};
};

//AKS-74p
if (_primweapon == "RH_aks74p") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74pk";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74psp";
	};
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74pgl";
	};
};

if (_primweapon == "RH_aks74pgl") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74pkgl";
	};
	if (_item == "AttPSO") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74pglsp";
	};
};

if (_primweapon == "RH_aks74pk") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74pkgl";
	};
};

if (_primweapon == "RH_aks74psp") then {
	if (_item == "AttGP30") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74pglsp";
	};
};

//AKS-74u
if (_primweapon == "RH_aks74u") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74uk";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74usd";
	};
};

if (_primweapon == "RH_aks74usd") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74usdk";
	};
};

if (_primweapon == "RH_aks74uk") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_aks74usdk";
	};
};

//bizon
if (_primweapon == "RH_bizon") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_bizonk";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_bizonsd";
	};
};

if (_primweapon == "RH_bizonsd") then {
	if (_item == "AttKobra") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_bizonsdk";
	};
};

if (_primweapon == "RH_bizonk") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_bizonsdk";
	};
};

//RK 95 (best gun eva)
if (_primweapon == "RH_rk95") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_rk95aim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_rk95ag";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_rk95sd";
	};
};

if (_primweapon == "RH_rk95sd") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_rk95sdaim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_rk95sdag";
	};
};

if (_primweapon == "RH_rk95aim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_rk95sdaim";
	};
};


if (_primweapon == "RH_rk95ag") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_rk95sdag";
	};
};

//MK14 EBR
if (_primweapon == "RH_mk14ebr") then {
	if (_item == "AttScope") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk14ebrsp";
	};
	/*if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk14ebr_sd";
	};*/
};

if (_primweapon == "RH_mk14ebr_sd") then {
	if (_item == "AttScope") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk14ebrsp_sd";
	};
};

/*if (_primweapon == "RH_mk14ebrsp") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk14ebrsp_sd";
	};
};*/


//MK 18
if (_primweapon == "RH_mk18") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18aim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18eot";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18sd";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18gl";
	};
};

if (_primweapon == "RH_Mk18sd") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18sdaim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18sdacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18sdeot";
	};
};

if (_primweapon == "RH_Mk18gl") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18glaim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18glacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18glaeot";
	};
};

if (_primweapon == "RH_Mk18aim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18sdaim";
	};

	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18glaim";
	};
};

if (_primweapon == "RH_Mk18acog") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18sdacog";
	};

	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18glacog";
	};
};

if (_primweapon == "RH_Mk18eot") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18sdeot";
	};

	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Mk18glaeot";
	};
};


//MK 18 Tan
if (_primweapon == "RH_mk18dc") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcaim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dceot";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcsd";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcgl";
	};
};

if (_primweapon == "RH_mk18dcsd") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcsdaim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcsdacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcsdeot";
	};
};

if (_primweapon == "RH_mk18dcgl") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcglaim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcglacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcglaeot";
	};
};

if (_primweapon == "RH_mk18dcaim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcsdaim";
	};

	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcglaim";
	};
};

if (_primweapon == "RH_mk18dcacog") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcsdacog";
	};

	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcglacog";
	};
};

if (_primweapon == "RH_mk18dceot") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcsdeot";
	};

	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_mk18dcglaeot";
	};
};


//M4 Custom
if (_primweapon == "RH_m4c") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4caim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ceotech";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsd";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cgl";
	};
};

if (_primweapon == "RH_m4ctsd") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdaim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdeotech";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdgl";
	};
};

if (_primweapon == "RH_m4cgl") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cglaim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cglacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cgleotech";
	};
	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdgl";
	};
};

if (_primweapon == "RH_m4caim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdaim";
	};

	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cglaim";
	};
};

if (_primweapon == "RH_m4cacog") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdacog";
	};

	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cglacog";
	};
};

if (_primweapon == "RH_m4ceotech") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdeotech";
	};

	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cgleotech";
	};
};

if (_primweapon == "RH_m4cglaim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdglaim";
	};
};

if (_primweapon == "RH_m4cglacog") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdglacog";
	};
};

if (_primweapon == "RH_m4cgleotech") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdgleotech";
	};
};

if (_primweapon == "RH_m4ctsdaim") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdglaim";
	};
};

if (_primweapon == "RH_m4ctsdacog") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdglacog";
	};
};

if (_primweapon == "RH_m4ctsdeotech") then {
	if (_item == "AttLauncher") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4ctsdgleotech";
	};
};


//M4 S.I.R
if (_primweapon == "RH_m4cs") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4csaim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4csacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cseotech";
	};
};


//M4 S.I.R
if (_primweapon == "RH_m4cmk") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cmkaim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cmkacog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_m4cmkeotech";
	};
};



//scar l
if (_primweapon == "RH_Scarl") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_aim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_eotech";
	};
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_sd_doc";
	};
};

if (_primweapon == "RH_Scarl_sd_doc") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_sd_aim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_sd_acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_sd_eotech";
	};
};

if (_primweapon == "RH_Scarl_aim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_sd_aim";
	};
};

if (_primweapon == "RH_Scarl_acog") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_sd_acog";
	};
};

if (_primweapon == "RH_Scarl_eotech") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_sd_eotech";
	};
};

//scar l eglm
if (_primweapon == "RH_Scarl_gl") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_gl_aim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_gl_acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_Scarl_gl_eotech";
	};
};



//scar h
if (_primweapon == "RH_scarh") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_aim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_eotech";
	};
	/*if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_sd_doc";
	};*/
};

if (_primweapon == "RH_scarh_sd_doc") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_sd_aim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_sd_acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_sd_eotech";
	};
};

/*if (_primweapon == "RH_scarh_aim") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_sd_aim";
	};
};

if (_primweapon == "RH_scarh_acog") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_sd_acog";
	};
};

if (_primweapon == "RH_scarh_eotech") then {
	if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_sd_eotech";
	};
};*/

//scar h eglm
if (_primweapon == "RH_scarh_gl") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_gl_aim";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_gl_acog";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_gl_eotech";
	};
};


//scar h
if (_primweapon == "RH_SCARAK") then {
	if (_item == "AttAimpoint") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_SCARAKAIM";
	};
	if (_item == "AttAcog") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_SCARAKACOG";
	};
	if (_item == "AttHolo") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_SCARAKEOTECH";
	};
	/*if (_item == "AttSilencer") then {
		_newweapon = 1;
		player removeWeapon _primweapon;
		player addWeapon "RH_scarh_sd_doc";
	};*/
};

if (_primweapon == (primaryWeapon player)) exitWith {cutText [format["Your weapon %1 does not support this attachment.", getText (configFile >> "CfgWeapons" >> _primweapon >> "displayname")], "PLAIN DOWN"];};

cutText [format["Attachment %1 succesfully applied.",getArray (configFile >> "CfgMagazines" >> _item >> "displayName")], "PLAIN DOWN"];
player removeMagazine _item;