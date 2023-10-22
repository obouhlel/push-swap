#!/bin/bash

random() {
  if [ $# -ne 3 ]; then
    echo "Usage: random N MIN MAX"
    return 1
  fi

  local N=$1
  local MIN=$2
  local MAX=$3
  local random_numbers

  random_numbers=$(seq $MIN $MAX | shuf | head -n $N)
  echo "$random_numbers" | tr '\n' ' '
}

# Teste pour 2 valeurs
echo "Teste pour 2 valeurs"
ARGS="1 2"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="2 1"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)
echo $ARGS" : "$RES" "$NB
echo ""

# Teste pour 3 valeurs
echo "Teste pour 3 valeurs"
ARGS="1 2 3"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="2 3 1"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="3 2 1"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="2 1 3"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="3 1 2"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)
echo $ARGS" : "$RES" "$NB
ARGS="1 3 2"
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)
echo $ARGS" : "$RES" "$NB
echo ""

# Teste pour 5 valeurs
echo "Teste pour 5 valeurs"
ARGS=$(random 5 1 5)
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)
if [ $NB -lt 12 ]; then
	NOTE="SUCCESS"
else
	NOTE="FAILURE"
fi
echo "$ARGS : $RES $NB $NOTE"
echo ""

# Teste pour 100 valeurs
echo "Teste pour 100 valeurs"
ARGS=$(random 100 1 100)
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)

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
echo ""

# Teste pour 500 valeurs
echo "Teste pour 500 valeurs"
ARGS=$(random 500 1 500)
NB=$(./push_swap $ARGS | wc -l)
RES=$(./push_swap $ARGS | ./checker $ARGS)
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