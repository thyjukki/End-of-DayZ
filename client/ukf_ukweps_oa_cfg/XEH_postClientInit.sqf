// XEH_postClientInit.sqf

// This is actually for weapon light functionality
// ACE users should just use ALT + L (configurable in ACE settings)
if (isClass(configFile>>"CfgPatches">>"ace_main")) then {UKF_noCQBsights = true};
// Will need to script the hand/bipod animation in a non-cheating way too

[] execVM "\ukf_ukweps_oa\scripts\CQB\UKF_CQBwep.sqf";
[] execVM "\ukf_ukweps_oa\scripts\FHG\UKF_FHGwep.sqf";
