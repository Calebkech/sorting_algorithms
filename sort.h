#include <stddef.h>

/**
 * typedef enum bool - Enumeration to represent boolean values.
 * @false: Represents the boolean value false, assigned the value 0.
 * @true: Represents the boolean value true, assigned the next integer value.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/* helper functions */
void print_array(const int *array, size_t size);

/* Sorting algoritms */
void bubble_sort(int *array, size_t size);