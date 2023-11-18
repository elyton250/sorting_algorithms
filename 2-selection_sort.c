#include "sort.h"
/**
  *selection_sort - it carries out selection sort
  *@array: the array to be selcted
  *@size: the size of the array
  */
void selection_sort(int *array, size_t size)
{
	size_t i, min_index, j;
	int temp;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		temp = array[min_index];
		array[min_index] = array[i];
		array[i] = temp;

		print_array(array, size);
	}
}
