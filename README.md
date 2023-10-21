# Explanation of the "push swap" algorithm

The "push swap" algorithm is used to sort an array of integers using two stacks, which we'll refer to as A and B. The possible moves are as follows:

- `sa`: Swap A - Swap the first two elements of stack A.
- `sb`: Swap B - Swap the first two elements of stack B.
- `ss`: Swap A and B - Perform a `sa` followed by an `sb`.
- `ra`: Rotate A - Move the first element of stack A to the end.
- `rb`: Rotate B - Move the first element of stack B to the end.
- `rr`: Rotate A and B - Perform an `ra` followed by an `rb`.
- `rra`: Reverse Rotate A - Move the last element of stack A to the beginning.
- `rrb`: Reverse Rotate B - Move the last element of stack B to the beginning.
- `rrr`: Reverse Rotate A and B - Perform an `rra` followed by an `rrb`.
- `pa`: Push A - Take the first element from stack B and place it at the beginning of stack A.
- `pb`: Push B - Take the first element from stack A and place it at the beginning of stack B.

## Project Implementation

At the beginning of the "push swap" project, you followed these steps:

1. **Parsing of Arguments**: You parsed the arguments passed to the program to ensure that they are all numbers, allowing for "-" and "+" signs for negative and positive numbers.

2. **Overflow Check**: You implemented a conversion technique to determine if values exceeded the limits of an integer (`INT_MAX` and `INT_MIN`). You used two converters, one for integers and another for longs, and if the two conversions differed, it indicated overflow.

3. **Elimination of Duplicates**: Once the array was created, you iterated through the array to ensure that there were no duplicates using a nested loop.

4. **Conversion of Numbers by Position**: To simplify the algorithm, you assigned each number a value based on its position in the array, so as to avoid large gaps between numbers.

5. **Update of Stack A and B Information**: You calculated and updated information such as size, median, maximum, and minimum for stacks A and B.

6. **Sorting Algorithm for Three Elements**: You implemented an algorithm that found the minimum and maximum in stack A, then placed them in the correct order using movements.

7. **Algorithm for Sorting Five or More Elements**: You used a pivot algorithm to send the minimum elements from stack A to stack B. This process was repeated until three elements remained in stack A, at which point you applied the three-element sorting algorithm.

8. **Algorithm for Sorting Any Number of Values (N)**: You utilized a pivot algorithm based on the median. If an element was the median, it was "pushed" to stack B. This process was repeated until three elements remained in stack A, at which point you applied the three-element sorting algorithm.

9. **Optimization of Movements**: You sought to minimize the number of movements by using a cost calculation to decide on optimal moves.

10. **Finalization**: You determined if `ra` or `rra` movements were more efficient for arranging the remaining elements in order before completing the sorting.

# Running the Push Swap Program

## Prerequisites

Before running your "push swap" program, make sure you have the following prerequisites:

- A Linux operating system.

## Building the Program

To build your "push swap" program, you can use the `make` command. Ensure that you have a Makefile set up for your project. Here's how you can build it:

```shell
make
```

This command will compile your program and generate an executable called `push_swap`.

## Using the Program

You can execute your "push swap" program by providing a series of integer arguments. You can run it using the following command:

```shell
./push_swap $ARGS
```

Replace `$ARGS` with the list of integers you want to sort. The program will output a series of instructions for sorting the input.

## Counting the Number of Instructions

If you want to count the number of instructions generated by your "push swap" program, you can use the `wc -l` command as follows:

```shell
./push_swap $ARGS | wc -l
```

This will display the total count of instructions.

## Checking the Sorting

To verify the correctness of the sorting instructions, you can use the `checker` program. Execute the following command:

```shell
$ARGS="3 5 1 2 4";./push_swap $ARGS | ./checker $ARGS
```

If the input was sorted correctly, the `checker` program will output "OK." Otherwise, it will display "KO."

## Platform Compatibility

Please note that your "push swap" program is designed to work on Linux-based operating systems. It may not function on other platforms due to platform-specific system calls and dependencies.

Make sure you are running the program on a Linux system for it to work as intended.

Enjoy using your "push swap" program to efficiently sort integers!

# Thank you

Finally, thanks to tools available on GitHub, such as submodules for testing and visualization, you were able to develop and refine your implementation of the "push swap" algorithm.
