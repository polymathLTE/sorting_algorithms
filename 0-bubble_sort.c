#include "sort.h"

/**
 * bubble_sort - sorting function
 * @array: array pointer
 * @size: size the given array
 *
 * Description: sorts the given given array using bubble-sort method
 */

void bubble_sort(int *input, size_t size)
{
	/*declare variables*/
	size_t x, y, temp;

	if (size > 1)
	{
		x = 1;
		while (x < size)
		{
			y = 1;
			while (y <= (size - x))
			{
				if (input[y - 1] > input[y])
				{
					temp = input[y];
					input[y] = input[y - 1];
					input[y - 1] = temp;
					print_array(input, size);
				}

				++y;
			}
			++x;
		}
	}
}
