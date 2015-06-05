pushd %~dp0
set PWA_PATH="%~1\addons"

rmdir  /s/q .\@EndOFDayz

mkdir %PWA_PATH%
mkdir .\@EndOFDayz\addons

for /D %%f in (.\..\Client\*) do cpbo.exe -p "%%f" ".\@EndOFDayz\addons\%%~nxf.pbo"

for %%F in (.\@EndOFDayz\addons\*.pbo) do DSSignFile "c:\endofdayz.biprivatekey" %%F

move /y .\@EndOFDayz\addons\* %PWA_PATH%
popd