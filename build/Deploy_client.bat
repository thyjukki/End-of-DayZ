
RMDIR /S /Q  building

mkdir building

for /f "tokens=1-2*" %%A in ('reg query "HKEY_LOCAL_MACHINE\Software\Wow6432Node\bohemia interactive\arma 2" /v MAIN ^| find "REG_SZ"') do set MyPath=%%C


for /D %%f in (.\..\Client\*) do cpbo.exe -p "%%f" "building\%%~nxf.pbo"

for %%F in (building\*.pbo) do DSSignFile endofdayz.biprivatekey %%F

move building\*.pbo "%MyPath%\@EndOFDayzTest\addons"

move building\*.bisign "%MyPath%\@EndOFDayzTest\addons"

RMDIR /S /Q  building