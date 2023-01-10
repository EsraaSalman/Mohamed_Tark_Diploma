@echo off
setlocal EnableDelayedExpansion


if not exist "Text Files" (
mkdir "Text Files"
)
if not exist "Source Files" (
mkdir "Source Files"
)
if not exist "Header Files" (
mkdir "Header Files"
)

for /f "tokens=1-4" %%a in (Input.txt) do (

if not exist %%a (
mkdir %%a
)

cd %%a
if not exist %%b (
echo 0 >%%b
) else (
set /p counter=<%%b
set /a counter+=1
echo !counter!>%%b

)
if not exist %%c (
echo 0 >%%c
) else (
set /p counter=<%%c
set /a counter+=1
echo !counter!>%%c

)

if not exist %%d (
echo 0 >%%d
) else (
set /p counter=<%%d
set /a counter+=1
echo !counter!>%%d

)
cd ..

copy /y %%a\*.txt "Text Files">nul
copy /y %%a\*.c "Source Files">nul
copy /y %%a\*.h "Header Files">nul
)