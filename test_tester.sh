#!/bin/bash

# Generate all possible combinations of 7 unique numbers
combinations=$(echo {0..6}{0..6}{0..6}{0..6}{0..6}{0..6}{0..6} | tr ' ' '\n' | sort -u)

# Loop through each combination and test with push_swap and checker
for combo in $combinations; do
  # Convert the combination to an array of unique numbers
  numbers=($(echo $combo | sed -E 's/(.)/\1 /g' | tr ' ' '\n' | sort -u))

  # Run push_swap with the numbers and pipe output to checker
  result=$(./push_swap ${numbers[@]} | ./checker_linux ${numbers[@]})

  # Check the result and print numbers in red if not OK
  if [[ $result != "OK" ]]; then
    echo -e "\033[0;31m${numbers[@]}\033[0m"
  fi
done