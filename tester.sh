#!/bin/bash
# Testeur de la fonction de tri

# Teste pour 2 valeurs
echo "Teste pour 2 valeurs"
ARGS="1 2"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="2 1"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)
echo $ARGS" : "$RES" "$NB

# Teste pour 3 valeurs
echo "Teste pour 3 valeurs"
ARGS="1 2 3"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="2 3 1"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="3 2 1"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="2 1 3"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="3 1 2"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="1 3 2"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)
echo $ARGS" : "$RES" "$NB

# Teste pour 5 valeurs
echo "Teste pour 5 valeurs"
ARGS=$(./random.sh 5 1 5)
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)
echo "$ARGS : $RES $NB"

# # Teste pour 100 valeurs
# echo "Teste pour 100 valeurs"
# range=500
# declare -a arr
# while [ ${#arr[@]} -lt 100 ]
# do
# 	num=$((RANDOM%(range * 2) - range))
# 	if [[ ! " ${arr[@]} " =~ " ${num} " ]]; then
# 		arr+=($num)
# 	fi
# done
# ARGS=$(echo ${arr[@]} | tr ' ' '\n' | tr '\n' ' ')
# echo -n $ARGS": "
# ./push_swap $ARGS | ./checker_linux $ARGS

# # Teste pour 500 valeurs
# echo "Teste pour 500 valeurs"
# range=1000
# declare -a arr
# while [ ${#arr[@]} -lt 500 ]
# do
# 	num=$((RANDOM%(range * 2) - range))
# 	if [[ ! " ${arr[@]} " =~ " ${num} " ]]; then
# 		arr+=($num)
# 	fi
# done
# ARGS=$(echo ${arr[@]} | tr ' ' '\n' | tr '\n' ' ')
# echo -n $ARGS": "
# ./push_swap $ARGS | ./checker_linux $ARGS