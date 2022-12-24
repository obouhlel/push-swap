# Color
Red='\033[0;31m'
Green='\033[0;32m'
Yellow='\033[0;33m'
Cyan='\033[0;36m'
Purple='\033[0;35m'
Color_Off='\033[0m'

echo $Yellow "NORMINETTE" $Color_Off
norminette | grep "Error"
echo $Red "ERROR COMPILATION" $Color_Off
make | grep "Error" 
make clean | grep "Error"
echo '\n' $Purple "Nombre de valeur : 1, 2, 3, 4, 5, 10, 20, 50, 100, 500\n"
echo "100 :\n 1) > 700 ; 2) > 900 ; 3) > 1100 ; 4) > 1300 ; 5) > 1500\n"
echo "500 :\n 1) > 5500 ; 2) > 7000 ; 3) > 8500 ; 4) > 10000 ; 5) > 11500\n" $Color_Off

# 1
./genstack.pl 1 -1000 1000 > test_1
ARG=$(cat test_1)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "1\t:" $TEST '\t' $Yellow $RES $Color_Off

# 2
./genstack.pl 2 -1000 1000 > test_2
ARG=$(cat test_2)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "2\t:" $TEST '\t' $Yellow $RES $Color_Off

# 3
./genstack.pl 3 -1000 1000 > test_3
ARG=$(cat test_3)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "3\t:" $TEST '\t' $Yellow $RES $Color_Off

# 4
./genstack.pl 4 -1000 1000 > test_4
ARG=$(cat test_4)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "4\t:" $TEST '\t' $Yellow $RES $Color_Off

# 5
./genstack.pl 5 -1000 1000 > test_5
ARG=$(cat test_5)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "5\t:" $TEST '\t' $Yellow $RES $Color_Off

# 7
./genstack.pl 7 -1000 1000 > test_7
ARG=$(cat test_7)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "7\t:" $TEST '\t' $Yellow $RES $Color_Off

# 10
./genstack.pl 10 -1000 1000 > test_10
ARG=$(cat test_10)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "10\t:" $TEST '\t' $Yellow $RES $Color_Off

# 20
./genstack.pl 20 -1000 1000 > test_20
ARG=$(cat test_20)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "20\t:" $TEST '\t' $Yellow $RES $Color_Off

# 50
./genstack.pl 50 -1000 1000 > test_50
ARG=$(cat test_50)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "50\t:" $TEST '\t' $Yellow $RES $Color_Off

# 100
./genstack.pl 100 -1000 1000 > test_100
ARG=$(cat test_100)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "100\t:" $TEST '\t' $Yellow $RES $Color_Off

# 500
./genstack.pl 500 -1000 1000 > test_500
ARG=$(cat test_500)
RES=$(./push_swap $ARG | wc -l)
TEST=$(if [ $(./push_swap $ARG | ./checker_linux $ARG) = "OK" ]; then echo $Green "OK" $Color_Off; else echo $Red "KO" $Color_Off; fi)
echo $Cyan "500\t:" $TEST '\t' $Yellow $RES $Color_Off

rm -f push_swap
rm test_*