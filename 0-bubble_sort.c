#include "sort.h"

/**
 * swap - Swaps two integers.
 * @a: Pointer to the first integer to be swapped.
 * @b: Pointer to the second integer to be swapped.
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sorts an array of integers
 * in ascending order using bubble sort.
 *
 * @array: The array of integers to be sorted.
 * @size: The size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	bool swapped;
	size_t i;

	if (array == NULL || size < 2)
		return;

	do {
		swapped = false;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				swapped = true;
				print_array(array, size);
			}
		}
	} while (swapped);
}
