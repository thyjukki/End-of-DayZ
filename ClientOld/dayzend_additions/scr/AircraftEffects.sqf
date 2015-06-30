_veh = (_this select 0);

_script1 = [];

if (alive player) then
{
_script1 set [1, _veh execVM "\globemaster_c17\scr\FX_WingtipTrails.sqf"];
};