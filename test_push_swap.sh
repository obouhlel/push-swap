# Color
Red='\033[0;31m'
Green='\033[0;32m'
Yellow='\033[0;33m'
Cyan='\033[0;36m'
Purple='\033[0;35m'
Color_Off='\033[0m'

make
make clean

echo $Cyan "\nTeste\n" $Color_Off
# 10
ARG="7 9 2 1 0 3 4 5 6 8"
echo $Cyan $ARG $Color_Off
./push_swap $ARG

# 20
ARG="0 14 5 15 2 12 17 6 19 13 4 3 11 1 16 7 9 8 10 18"
echo $Cyan $ARG $Color_Off
./push_swap $ARG

ARG="-253 904 -590 805 838 212 -50 247 430 336 131 -306 -368 -759 -403 -23 201 -72 480 690"
echo $Cyan $ARG $Color_Off
./push_swap $ARG