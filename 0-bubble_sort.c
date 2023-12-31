#include "sort.h"
/**
 * bubble_sort - sorting set of n elements
 * @array: Array of data to be sorted
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int i = 0, j = 0, sorted = 1, tmp = 0;

	if (size < 2)
		return;
	j = size;
	while (sorted == 1 && j > 0)
	{
		sorted = 0;
		i = 1;
		while (i <= j)
		{
			if (array[i - 1] > array[i] && array[i] != '\0')
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				sorted = 1;
			}
			i += 1;
		}
		j -= 1;
	}
}
