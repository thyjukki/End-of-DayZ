del C:\arma2oa\@DayZEnd\addons\*.* /F /Q
del C:\arma2oa\@hive\addons\*.* /F /Q
del C:\arma2oa\MPMissions\dayz_1.chernarus.pbo /F /Q

mkdir C:\Arma2oa\@DayZEnd\addons
mkdir C:\Arma2oa\@hive\addons

for /D %%f in (.\..\Client\1.0\*) do cpbo.exe -p "%%f" "C:\arma2oa\@DayzEnd\addons\%%~nxf.pbo"

cpbo.exe -p ".\..\server\dayz_server" "C:\arma2oa\@hive\addons\dayz_server.pbo"

cpbo.exe -p ".\..\Mission\dayz_1.chernarus" "C:\arma2oa\MPMissions\dayz_1.chernarus.pbo"

xcopy /s/e/y .\..\Client\PBOS\*.pbo C:\arma2oa\@DayZEnd\addons

for %%F in (C:\Arma2oa\@DayZEnd\addons\*.pbo) do DSSignFile dayzend.biprivatekey %%F