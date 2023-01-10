@ECHO off
if [%3]==[] GOTO ERROR 
SET text=%1
SET folder=%2
SET file=%3 

IF EXIST %folder% (
GOTO VALIDEFOLDER
)
MKDIR %folder%
:VALIDEFOLDER
CD %folder%

ECHO %text%>%file%

CD ..
CD ..
GOTO END
:ERROR
ECHO "INVALIDE INPUT"
:END






