# C - Sorting algorithms & Big O

In this project, we implemented several different sorting algorithms.

## Helper Files

* [print_array.c](./print_array.c): C function for printing array of integers.

## Header Files

* [sort.h](./sort.h): it contains definitions and prototypes of functions written for the project.

Function Prototypes:

| File                       | Prototype                                         |
| -------------------------- | ------------------------------------------------- |
| `print_array.c`            | `void print_array(const int *array, size_t size)` |
| `print_list.c`             |  `void print_list(const listint_t *list)`         |
| `0-bubble_sort.c`          | `void bubble_sort(int *array, size_t size);`      |

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
