#include "sort.h"


void merge_sort(int *array, size_t size)
{
	int *left;
	int *right;
	int i;
	int mid;

	if (size <= 1)
		return;
	mid = size / 2;
	left = malloc(mid * sizeof(int));
	right = malloc(size - mid *sizeof(int));

	for (i = 0; i < mid; i++)
		left[i] = array[i];
	for (i = mid; i < size; i++)
		right[i - mid] = array[i];
	merge_sort(left, mid);
	merge_sort(right, size - mid);
	merge(left, right, array, size);
	free(left);
	free(right);
}


void merge(left, right, array, size)
{
	int l_size = size / 2;
	int r_size = size - l_size;

	int i = 0;
	int l = 0;
	int r = 0;

	while(l < l_size && r < r_size)
	{
		if (left(l) < right(r))
		{
			array[i] = left[l];
			i++;
			l++;
		}
		else
		{
			array[i] = right[r];
			i++;
			r++;
		}
	}
	while (l < l_size)
	{
		array[i] = left(l);
		i++;
		l++;
	}
	while (r < r_size)
	{
		array[i] = right[r];
		i++;
		r++;
	}
}
