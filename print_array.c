#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers.
 * @array: Pointer to the array to be printed.
 * @size: Number of elements in the array.
 *
 * Description:
 * This function prints the elements of an integer array, separated by commas.
 * The output is formatted with a newline character at the end.
 *
 * @array: Pointer to the array to be printed.
 * @size: Number of elements in the array.
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;

	/* Check for valid array pointer */
	while (array && i < size)
	{
		/* Print comma separator for elements after the first one */
		if (i > 0)
			printf(", ");

		/* Print the current element */
		printf("%d", array[i]);
		++i;
	}

	/* Print newline character at the end */
	printf("\n");
}
