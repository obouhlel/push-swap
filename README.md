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

Finally, thanks to tools available on GitHub, such as submodules for testing and visualization, you were able to develop and refine your implementation of the "push swap" algorithm.
