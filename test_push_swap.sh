# Color
Red='\033[0;31m'
Green='\033[0;32m'
Yellow='\033[0;33m'
Cyan='\033[0;36m'
Purple='\033[0;35m'
Color_Off='\033[0m'

rm -f push_swap
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

# ARG="-253 904 -590 805 838 212 -50 247 430 336 131 -306 -368 -759 -403 -23 201 -72 480 690"
# echo $Cyan $ARG $Color_Off
# ./push_swap $ARG

# # 100
# ARG="36 81 77 55 79 23 86 97 47 34 33 45 32 17 89 56 69 26 96 16 59 20 53 13 64 70 83 11 9 3 31 61 85 73 48 38 74 98 29 10 12 37 8 51 25 44 82 75 80 54"
# echo $Cyan $ARG $Color_Off
# ./push_swap $ARG