#include "sort.h"

/**
 * insertion_sort - Implement the insertion sorting algorithm (asc)
 * @input: unsorted array
 * @size: size of input array
 */
void insertion_sort(int *input, size_t size)
{
	size_t i, j, temp;

	if (size > 1)
	{
		i = 1;
		while (i < size)
		{
			j = i;
			while (j > 0)
			{
				if (input[j] < input[j - 1])
				{
					temp = input[j - 1];
					input[j - 1] = input[j];
					input[j] = temp;
					print_array(input, size);
				}
				else
					break;
				--j;
			}
			++i;
		}
	}
}
