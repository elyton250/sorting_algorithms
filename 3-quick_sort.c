#include "sort.h"


/**
  *swap - this function swaps elements
  *@a: elelment to be swapped
  *@b: the other element to be swapped
  */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
  *quick_sort - it implements the sort
  *@array: it is the array to be sordted
  *@size: the size of the array
  */
void quick_sort(int *array, size_t size)
{
	int high = size;

	recur(array, 0, high - 1);
}

/**
  *recur - recurses into the sub arraays
  *@array: the array to be sorted
  *@low: the lowest index
  *@high: the high index
  */
void recur(int *array, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high);

		recur(array, low, pi - 1);
		recur(array, pi + 1, high);
	}
}

/**
  *partition - it divides the array on the pivot
  *@array: the array to be partitioned
  *@low: the low index
  *@high: the highest index
  */
int partition(int *array, int low, int high)
{
	int i = low;
	int j;
	/*size_t size = high - low + 1;*/

	int p_value = array[high];

	for (j = low; j < high; j++)
	{
		if (array[i] <= p_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[j]);
	
	return (i);
}
