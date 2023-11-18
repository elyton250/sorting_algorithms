#include "sort.h"
/**
  *bubble_sort - this function implements bubble sort
  *@array: to be printed
  *@size: size of the array
  *Return: void
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, p;
	int k;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for(p = 0; p < size -1; p++)
	{
		swapped = 0;
		for(i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				k = array[i + 1];
				array[i + 1] = array[i];
				array[i] = k;
				print_array(array, size);
				swapped = 1;
			}
		}
	if (swapped == 0)
		break;
	}
}
