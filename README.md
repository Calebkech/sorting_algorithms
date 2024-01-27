# C - Sorting algorithms & Big O

## Team Members

1. Caleb Kemboi
2. Aymane Montassir

## Project Overview

This project involves implementing various sorting algorithms in the C programming language. The tasks are divided among the team members, and each member is responsible for specific parts of the project.

## Coding Standards and Requirements

- Allowed Editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- Code Style: Betty style
- No global variables allowed
- Header file: sort.h for function prototypes
- Maximum 5 functions per file
- Do not use standard library functions unless specified otherwise

## Sorting Algorithms Project

In this project, we implemented several different sorting algorithms.

## Helper Files

* [print_array.c](./print_array.c): C function for printing array of integers.

## Header Files

* [sort.h](./sort.h): it contains definitions and prototypes of functions written for the project.

Function Prototypes:

| File                       | Prototype                                         |
| -------------------------- | ------------------------------------------------- |
| `print_array.c`            | `void print_array(const int *array, size_t size)` |
| `print_list.c`             | `void print_list(const listint_t *list)`          |
| `0-bubble_sort.c`          | `void bubble_sort(int *array, size_t size);`      |
| `2-selection_sort.c`       | `void selection_sort(int *array, size_t size);`   |

## Bubble Sort Algorithm

## Overview

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Implementation

```
#include "sort.h"

void swap_ints(int *a, int *b);
void bubble_sort(int *array, size_t size);

```

## Details

swap_ints: Swaps values of two integers.
bubble_sort: Sorts an array in ascending order using Bubble Sort. Prints the array after each swap.

## Usage

```
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    bubble_sort(array, n);
    print_array(array, n);

    return (0);
}
```

## Compilation

`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble`

## Notes

* swap_ints is a utility function to swap two integers.
* print_array prints the array after each swap.

Feel free to adapt this brief Markdown file as needed. If you have any further questions or adjustments, let me know!.

## Selection Sort Algorithm Implementation

This repository contains a simple implementation of the Selection Sort algorithm in C, along with a function to swap two integers. The code is organized into a header file (`sort.h`) and a source file (`sort.c`).

## Files

* `sort.h`: Header file containing function prototypes and any necessary includes.
* `sort.c`: Source file containing the implementation of the Selection Sort algorithm and the integer swapping function.
* `main.c`: Example usage or testing code (if applicable).

## Usage

To use the `selection_sort` function and `swap_nums` function in your C program, include the "sort.h" header file:

`#include "sort.h"`

## Functions

`void swap_nums(int *a, int *b)`
This function swaps the values of two integers.

`void selection_sort(int *array, size_t size)`
This function sorts an array of integers in ascending order using the Selection Sort algorithm. It includes a check for valid input (NULL array or array with less than 2 elements) and a custom swapping function.

## Compilation

`gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select`

## Example

```
#include "sort.h"

int main() {
    int arr[] = {4, 2, 7, 1, 9, 5};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, size);

    return 0;
}
```

## 1-insertion sort - files `1-insertion_sort_list.c, 1-O`

Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

Prototype: `void insertion_sort_list(listint_t **list);`
You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
You’re expected to print the list after each time you swap two elements (See example below)
Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

## 3. Quick sort - files `3-quick_sort.c, 3-O`

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

Prototype: `void quick_sort(int *array, size_t size);`
You must implement the Lomuto partition scheme.
The pivot should always be the last element of the partition being sorted.
You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

## 4. Shell sort - Knuth Sequence - file `100-shell_sort.c`

Write a function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence

Prototype: `void shell_sort(int *array, size_t size);`
You must use the following sequence of intervals (a.k.a the Knuth sequence):
n+1 = n * 3 + 1
1, 4, 13, 40, 121, ...
You’re expected to print the array each time you decrease the interval (See example below).
No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap

## 5. Cocktail shaker sort - files `101-cocktail_sort_list.c, 101-O`

Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm

Prototype: `void cocktail_sort_list(listint_t **list);`
You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
You’re expected to print the list after each time you swap two elements (See example below)
Write in the file 101-O, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

## 6. Counting sort - files `102-counting_sort.c, 102-O`

Write a function that sorts an array of integers in ascending order using the Counting sort algorithm

Prototype: `void counting_sort(int *array, size_t size);`
You can assume that array will contain only numbers >= 0
You are allowed to use malloc and free for this task
You’re expected to print your counting array once it is set up (See example below)
This array is of size k + 1 where k is the largest number in array
Write in the file 102-O, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

## 7. Merge sort - files `103-merge_sort.c, 103-O, 103-main.c`

Write a function that sorts an array of integers in ascending order using the Merge sort algorithm

Prototype: `void merge_sort(int *array, size_t size);`
You must implement the top-down merge sort algorithm
When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}
Sort the left array before the right array
You are allowed to use printf
You are allowed to use malloc and free only once (only one call)
Output: see example
Write in the file 103-O, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case

## 8. Heap sort - files `104-heap_sort.c, 104-O, 104-main.c`

Write a function that sorts an array of integers in ascending order using the Heap sort algorithm

Prototype: `void heap_sort(int *array, size_t size);`
You must implement the sift-down heap sort algorithm
You’re expected to print the array after each time you swap two elements (See example below)
Write in the file 104-O, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:

in the best case
in the average case
in the worst case
