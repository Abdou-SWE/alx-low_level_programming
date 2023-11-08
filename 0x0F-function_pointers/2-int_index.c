#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers in the program.
 * @size: The size of the array in the program.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]) != 0)
			return (ind);
	}
	return (-1);
}
