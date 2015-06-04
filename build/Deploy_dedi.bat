mkdir C:\Arma2\@EndOfDayZ\addons
mkdir building

for /D %%f in (.\..\Client\*) do cpbo.exe -p "%%f" "building\%%~nxf.pbo"

for %%F in (building\*.pbo) do DSSignFile "c:\endofdayz.biprivatekey" %%F

xcopy /s/e/y .\building\* C:\arma2oa\@EndOfDayZ\addons