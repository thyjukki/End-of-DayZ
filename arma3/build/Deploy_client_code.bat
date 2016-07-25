pushd %~dp0

set PWA_PATH="%~1\@DayzAwaken\addons"

mkdir %PWA_PATH%
mkdir .\building

cpbo.exe -p .\..\addons\dayz_code ".\building\dayz_code.pbo"

DSSignFile "c:\endofdayz.biprivatekey" .\building\dayz_code.pbo

move /y .\building\dayz_code.* %PWA_PATH%

rmdir /s/q .\building

popd