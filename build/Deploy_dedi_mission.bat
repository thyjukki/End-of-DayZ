pushd %~dp0

set PWA_PATH="%~1\MPMission"

mkdir %PWA_PATH%

cpbo.exe -p .\..\Mission\dayz_1.chernarus "%PWA_PATH%\dayz_1.chernarus.pbo"

popd