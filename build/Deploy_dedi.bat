pushd %~dp0

set PWA_PATH="%~1\@DayzAwaken\addons"

mkdir %PWA_PATH%
mkdir .\building

for /D %%f in (.\..\client\*) do cpbo.exe -p "%%f" "building\%%~nxf.pbo"

for %%F in (building\*.pbo) do DSSignFile "c:\endofdayz.biprivatekey" %%F

move /y .\building\* %PWA_PATH%

rmdir /s/q .\building

popd