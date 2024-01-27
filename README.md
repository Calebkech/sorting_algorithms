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
