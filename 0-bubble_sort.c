#include "sort.h"

/**
 * bubble_sort - function that sorts an array
 * @array: input of an arrray
 * @size: size of the array
 *
 * Return: nothing to return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, m;
	int tmp, swap;

	for (m = size, swap = 1; m > 0 && swap; m--)
	{
		swap = 0;
		for (i = 0; (i + 1) < m; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
