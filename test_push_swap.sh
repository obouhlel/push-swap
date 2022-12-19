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

# ARG="9 1 5 7 8 6 2 4 3 0"
# echo $Cyan $ARG $Color_Off
# valgrind ./push_swap $ARG

# ARG="1 9 2 3 4 5 6"
# echo $Cyan $ARG $Color_Off
# ./push_swap $ARG

ARG="2 3 5 12 10 6 9 7 4 1 8 11"
echo $Cyan $ARG $Color_Off
valgrind ./push_swap $ARG

# # 10
# ARG="7 9 2 1 0 3 4 5 6 8"
# echo $Cyan $ARG $Color_Off
# ./push_swap $ARG

# # 20
# ARG="0 14 5 15 2 12 17 6 19 13 4 3 11 1 16 7 9 8 10 18"
# echo $Cyan $ARG $Color_Off
# ./push_swap $ARG

# ARG="-253 904 -590 805 838 212 -50 247 430 336 131 -306 -368 -759 -403 -23 201 -72 480 690"
# echo $Cyan $ARG $Color_Off
# ./push_swap $ARG

# # 100
# ARG="94 76 84 83 56 2 22 5 74 57 12 43 27 82 77 53 16 50 3 64 14 34 19 91 11 72 21 51 1 32 61 89 70 69 47 86 79 68 15 24 59 49 17 63 35 29 92 78 54 18 42 10 9 6 55 73 97 44 39 65 30 62 52 99 60 33 81 4 95 0 37 36 80 75 31 13 7 8 67 58 66 98 23 93 41 20 96 38 85 48 71 45 28 90 46 40 88 26 25 87"
# echo $Cyan $ARG $Color_Off
# ./push_swap $ARG
