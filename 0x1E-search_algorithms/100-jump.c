#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 *  using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * assume that array will be sorted in ascending order
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, return -1
 * Every compare, print
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t right = sqrt(size);
	size_t n = right - 1;

	if (array == NULL)
		return (-1);

	while (array[n] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);

		left = right;
		right += sqrt(size);

		if (left >= size - 1)
			break;

		if (right > size - 1)
			n = size - 1;
		else
			n = right;
	}
	printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	for (i = left; i < size && i <= right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
