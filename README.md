# Push_Swap

## Description
The Push Swap project is a sorting algorithm implementation that aims to sort a list of integers using a combination of two stacks and a limited set of operations. The goal is to sort the list with the minimum number of operations possible. This project is commonly used as a coding challenge to test algorithmic skills and understanding of data structures.

<p align="center">
  <img src="./push_print.gif" alt="Print_screen" width="600"/>
</p>

## Algorithm
The algorithm used in this project is a custom sorting algorithm that leverages two stacks, `stack_a` and `stack_b`, and a set of operations to sort the integers efficiently. The operations include:

- `sa`: Swap the first two elements at the top of `stack_a`.
- `sb`: Swap the first two elements at the top of `stack_b`.
- `ss`: Swap the first two elements at the top of both `stack_a` and `stack_b`.
- `pa`: Push the top element of `stack_b` onto `stack_a`.
- `pb`: Push the top element of `stack_a` onto `stack_b`.
- `ra`: Rotate `stack_a` upwards (the first element becomes the last one).
- `rb`: Rotate `stack_b` upwards (the first element becomes the last one).
- `rr`: Rotate both `stack_a` and `stack_b` upwards.
- `rra`: Reverse rotate `stack_a` (the last element becomes the first one).
- `rrb`: Reverse rotate `stack_b` (the last element becomes the first one).
- `rrr`: Reverse rotate both `stack_a` and `stack_b`.

The algorithm involves strategically using these operations to move elements between the two stacks and sort the list in ascending order.

## Implementation Details
The sorting algorithm implemented in this project closely follows the **Turk Algorithm**, which ensures efficient sorting by:

1. **Pushing Elements from `stack_a` to `stack_b` in a Controlled Manner**
   - Elements are pushed while maintaining descending order in `stack_b` to optimize retrieval.
   - Uses `ft_find_place_b()` to determine the correct insertion position in `stack_b`.

2. **Sorting Remaining Elements in `stack_a` When 3 Are Left**
   - `sort_3()` is used to efficiently sort three elements left in `stack_a`.

3. **Finding the Cheapest Number to Push**
   - Functions such as `ft_case_rarb()`, `ft_case_rarrb()`, `ft_case_rrarrb()`, and `ft_case_rrarb()` compute different movement costs.
   - The cheapest move is selected to optimize efficiency.

4. **Minimizing Moves Using Simultaneous Rotations**
   - `ft_rotate_type_ab()` and `ft_rotate_type_ba()` determine optimal rotations before pushing elements between stacks.
   - Reduces the number of operations by choosing minimal move combinations.

5. **Final Sorting & Positioning the Minimum Element**
   - `sort_more_than_3()` ensures that after moving elements back to `stack_a`, the smallest element is brought to the top for a fully sorted result.

## Usage
To use the Push Swap program, compile the source code and run the executable with a list of integers as arguments. The program will output the sequence of operations required to sort the list.

```sh
gcc -o push_swap push_swap.c
./push_swap 3 2 5 1 4
```

This will generate the optimized sequence of operations needed to sort the given list of numbers.

## Conclusion
The Push Swap project is an excellent exercise in algorithm design and optimization, demonstrating efficient sorting techniques using limited operations and data structures. By leveraging a structured approach like the **Turk Algorithm**, it minimizes the number of moves required to achieve a sorted sequence.

