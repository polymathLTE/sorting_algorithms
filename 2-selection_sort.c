#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @input: unsorted input array
 * @size: size of input array
 */
void selection_sort(int *input, size_t size)
{
	size_t i, j, temp, min;

	if (size > 1)
	{
		i = 0;
		while (i < size)
		{
			min = i;
			j = i + 1;

			while (j < size)
			{
				if (input[j] < input[min])
				{
					min = j;
				}
				j++;
			}

			if (min != i)
			{
				temp = input[i];
				input[i] = input[min];
				input[min] = temp;

				print_array(input, size);
			}

			i++;
		}
	}
}
