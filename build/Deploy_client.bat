
RMDIR /S /Q  .\building

mkdir .\building

for /f "tokens=1-2*" %%A in ('reg query "HKEY_LOCAL_MACHINE\Software\Wow6432Node\bohemia interactive\ArmA 2 OA\BattlEye" /v MAIN ^| find "REG_SZ"') do set MyPath=%%C

mkdir "%MyPath%\@EndOFDayzTest\addons"

for /D %%f in (.\..\Client\*) do cpbo.exe -p "%%f" ".\building\%%~nxf.pbo"

for %%F in (.\building\*.pbo) do DSSignFile "c:\endofdayz.biprivatekey" %%F

move /y .\building\* "%MyPath%\@EndOFDayzTest\addons"

RMDIR /S /Q  .\building