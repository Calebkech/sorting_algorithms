#include "sort.h"

/**
 * swap_nums - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_nums(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the Selection Sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j;
    int *min_element;
    
    /* Check for valid input: NULL array or array with less than 2 elements */
    if (array == NULL || size < 2)
        return;

    /* Iterate through the array */
    for (i = 0; i < size - 1; i++)
    {
        min_element = array + i;

        /* Find the minimum element in the unsorted part of the array */
        for (j = i + 1; j < size; j++)
            min_element = (array[j] < *min_element) ? (array + j) : min_element;

        /* Swap the found minimum element with the first element if not already in place */
        if ((array + i) != min_element)
        {
            swap_nums(array + i, min_element); /* Custom function to swap two integers */
            print_array(array, size); /* Custom function to print the array after each swap */
        }
    }
}
