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
if [ $NB -lt 12 ]; then
	NOTE="SUCCESS"
else
	NOTE="FAIL"
fi
echo "$ARGS : $RES $NB $NOTE"

# Teste pour 100 valeurs
echo "Teste pour 100 valeurs"
ARGS=$(./random.sh 100 1 100)
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)

if [ $NB -lt 700 ]; then
	NOTE=5
elif [ $NB -lt 900 ]; then
	NOTE=4
elif [ $NB -lt 1100 ]; then
	NOTE=3
elif [ $NB -lt 1300 ]; then
	NOTE=2
elif [ $NB -lt 1500 ]; then
	NOTE=1
else
	NOTE=0
fi

echo $ARGS > 100
echo "Check file 100 : $RES $NB $NOTE/5"

# Teste pour 500 valeurs
echo "Teste pour 500 valeurs"
ARGS=$(./random.sh 500 1 500)
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker_linux $ARGS)
if [ $NB -lt 5500 ]; then
	NOTE=5
elif [ $NB -lt 7000 ]; then
	NOTE=4
elif [ $NB -lt 8500 ]; then
	NOTE=3
elif [ $NB -lt 10000 ]; then
	NOTE=2
elif [ $NB -lt 11500 ]; then
	NOTE=1
else
	NOTE=0
fi
echo $ARGS > 500
echo "Check file 500 : $RES $NB $NOTE/5"