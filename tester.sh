#!/bin/bash

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