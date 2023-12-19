#include "sort.h"
/**
 * shell_sort - function that sorts an array of integers
 * @array: input of the arrray
 * @size: size of the array
 *
 * Return: nothing to return
 */
void shell_sort(int *array, size_t size)
{
	size_t n = 1;

	while (n < size)
		n = (n * 3) + 1;

	while ((n = (n - 1) / 3) > 0)
		_ssort(array, size, n);
}
/**
 * _ssort - shell_sort sub function
 * @a: input of the arrray
 * @size: size of the array
 * @n:  intervale
 *
 * Return: nothing to return
 */
void _ssort(int *a, int size, int n)
{
	int tmp, x, y;

	for (x = 0; (x + n) < size; x++)
	{
		for (y = x + n; (y - n) >= 0; y = y - n)
		{
			if (a[y] < a[y - n])
			{
				tmp = a[y];
				a[y] = a[y - n];
				a[y - n] = tmp;
			}
		}
	}
	print_array(a, size);
}
