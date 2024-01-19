#include "sort.h"

/**
 * swap_ints - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description:
 * This function takes two pointers to integers and swaps the values
 * they point to, effectively swapping the values of the integers.
 */
void swap_nums(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort.
 * @array: Pointer to the array of integers to be sorted.
 * @size: Size of the array.
 *
 * Description:
 * This function implements the Bubble Sort algorithm to sort an array of integers
 * in ascending order. It prints the array after each swap.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	/* Check for valid array and size */
	if (array == NULL || size < 2)
		return;

	/* Continue sorting until no more swaps are needed */
	while (bubbly == false)
	{
		bubbly = true;

		/* Traverse the array and perform swaps as needed */
		for (i = 0; i < len - 1; i++)
		{
			/* If the current element is greater than the next, swap them */
			if (array[i] > array[i + 1])
			{
				swap_nums(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false; /* Indicate a swap occurred */
			}
		}
		len--; /* Reduce the length of the unsorted portion of the array */
	}
}
