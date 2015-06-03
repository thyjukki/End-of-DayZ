if (isNil "Dayz_BuildCameraMode") then {
	Dayz_BuildCameraMode = 0;
};
if (Dayz_BuildCameraMode == 0) then {
	showCinemaBorder false;
	cutText ["Build Camera Active.", "PLAIN DOWN"];
	Dayz_BuildCamera = "camera" camCreate [0,0,0];
	Dayz_BuildCamera cameraeffect ["Internal", "back"];
	Dayz_BuildCamera camsettarget (player getVariable["BuildObject",player]);
	Dayz_BuildCamera camsetrelpos [0,0,10];
	Dayz_BuildCamera camSetDir 0;
	Dayz_BuildCamera camcommit 0;
	Dayz_BuildCameraMode = 1;
} else {
	cutText ["Build Camera Disabled.", "PLAIN DOWN"];
	Dayz_BuildCamera cameraeffect ["terminate", "back"];
	camdestroy Dayz_BuildCamera;
	player switchCamera (player getVariable["BuildCamera","INTERNAL"]);
	Dayz_BuildCameraMode = 0;
};
