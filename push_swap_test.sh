# Color
Red='\033[0;31m'
Green='\033[0;32m'
Yellow='\033[0;33m'
Cyan='\033[0;36m'
Purple='\033[0;35m'
Color_Off='\033[0m'
echo $Green
make
make clean
echo '\n'
ARG="506 613 645 488 -541 -863 -262 777 -493 -692"
echo $Cyan "Value = " $ARG $Color_Off
valgrind ./push_swap $ARG
rm -f push_swap