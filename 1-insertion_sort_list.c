#include "sort.h"

/**
 * insertion_sort_list - Implement the insertion sorting algorithm (asc)
 * @list: unsorted doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *index, *j, *prev, *next;

	if (*list)
		if ((*list)->prev != NULL)
			*list = (*list)->prev;

	index = (*list)->next;
	if (index != NULL)
		while (index != NULL)
		{
			j = index;
			index = index->next;

			while (j->prev)
			{
				if (j->n < j->prev->n)
				{
					prev = j->prev;
					next = j->next;

					j->prev = j->prev->prev;
					prev->next = next;
					prev->prev = j;
					if (next)
						next->prev = prev;
					j->next = prev;
					if (j->prev)
						j->prev->next = j;
					else
						*list = j;
					print_list(*list);
				}
				else
					break;
			}
		}
}
