#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @input: unsorted input array
 * @size: size of input array
 */
void selection_sort(int *input, size_t size)
{
	size_t i, j, temp;
	int selection;

	if (size > 1)
	{
		i = 0;
		while (i < size)
		{
			selection = input[i];
			j = i + 1;

			while (j < size)
			{
				if (selection > input[j])
				{
					temp = input[j];
					input[j] = selection;
					selection = temp;
					print_array(input, size);
				}
				j++;
			}
			input[i] = selection;
			i++;
		}
	}
}
