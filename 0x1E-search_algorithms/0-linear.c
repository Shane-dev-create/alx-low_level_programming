#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search algo
 * @array: pointer to first elemnt to search in array
 * @size: number of elements in array
 * @value: value to search for
 * Return: int or -1 if vlue is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	for (a = 0, a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}