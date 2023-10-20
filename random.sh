#!/bin/bash
if [ $# -ne 3 ]; then
  echo "Usage: $0 N MIN MAX"
  exit 1
fi
MIN=$2
MAX=$3
random_numbers=$(seq $MIN $MAX | shuf | head -n $1)
ARGS=$(echo "$random_numbers" | tr '\n' ' ')
echo $ARGS