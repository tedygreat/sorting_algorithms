#include "sort.h"
void swap_ints(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, index;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (index = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			swap_ints(array + index, array + index + 1);
			print_array(array, size);
			}
		}
	}
}
