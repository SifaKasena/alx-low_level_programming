#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using
 *               jump search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);
	i -= step;
	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			break;
	}

	return (-1);
}
