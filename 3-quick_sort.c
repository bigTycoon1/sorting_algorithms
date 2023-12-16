#include "sort.h"
/**
 * quick_sort - function that sorts an array of an integers
 * @array: input of an arrray
 * @size: size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}

/**
 * _qsort - quick_sort auxiliar functio
 * @a: input of an arrray
 * @low: the first element
 * @high: the last element
 * @size: size of the array
 *
 * Return: nothing to return
 */
void _qsort(int *a, int low, int high, int size)
{
	int x, y, i;
	int tmp;

	if (low < high)
	{
		x = high;
		y = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[x])
			{
				if (i != y)
				{
					tmp = a[i];
					a[i] = a[y];
					a[y] = tmp;
					print_array(a, size);
				}
				y++;
			}
		}
		if (y != x && a[y] != a[x])
		{
			tmp = a[y];
			a[y] = a[x];
			a[x] = tmp;
			print_array(a, size);
		}
		_qsort(a, low, y - 1, size);
		_qsort(a, y + 1, high, size);
	}
}
