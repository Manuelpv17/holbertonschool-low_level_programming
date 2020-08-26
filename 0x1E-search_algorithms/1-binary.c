#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* assume that array will be sorted in ascending order
 * @size: number of elements in array
 * @value: value to search for
 * assume that value won’t appear more than once in array
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, return -1
 * Print array every time that change
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
	}
	return (-1);
}
