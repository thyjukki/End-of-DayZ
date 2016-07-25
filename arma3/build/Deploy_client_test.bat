pushd %~dp0
set PWA_PATH="%~1\addons"
set PBO_PATH="%~1\addons\*.pbo"

rmdir  /s/q .\@EndOFDayz

mkdir %PWA_PATH%
mkdir .\@EndOFDayz\addons

for /D %%f in (.\..\Client\*) do cpbo.exe -p "%%f" ".\@EndOFDayz\addons\%%~nxf.pbo"

move /y .\@EndOFDayz\addons\* %PWA_PATH%

for %%F in (%PBO_PATH%) do DSSignFile "c:\endofdayz.biprivatekey" "%%F"
popd