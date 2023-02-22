#include "sort.h"

/**
 * bubble_sort - sorting function
 * @array: array pointer
 * @size: size the given array
 *
 * Description: sorts the given given array using bubble-sort method
 */

void bubble_sort(int *array, size_t size)
{
  /*declare variables*/
  int i, temp, swapped;
  printf("Hello World");
  printf("%d", *(array + 1));
  do
  {
       swapped = 0;
       for (i = 1; i < (int)size; )
       {
	    if (*(array + i-1) > *(array + i))
	    {
		 temp = *(array + i-1);
		 *(array + i-1) = *(array + i);
		 *(array + i) = temp;
		 swapped = 1;
		 printf("%d,", *(array + 1));
	    }
       }
  }
  while(!swapped);
}
