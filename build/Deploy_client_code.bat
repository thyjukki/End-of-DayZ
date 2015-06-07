pushd %~dp0
set PWA_PATH="%~1\addons"

rmdir  /s/q .\@EndOFDayz

mkdir %PWA_PATH%
mkdir .\@EndOFDayz\addons

cpbo.exe -p .\..\Client\dayz_code ".\@EndOFDayz\addons\dayz_code.pbo"

DSSignFile "c:\endofdayz.biprivatekey" .\@EndOFDayz\addons\dayz_code.pbo

move /y .\@EndOFDayz\addons\* %PWA_PATH%
popd