#include "sort.h"

/**
 * insertion_sort_list - Implement the insertion sorting algorithm (asc)
 * @list: unsorted doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *prev, *next, *current;

	if (*list != NULL)
	{
		if ((*list)->prev != NULL)
			*list = (*list)->prev;

		i = (*list)->next;
		if (i != NULL)
		{
			while (i != NULL)
			{
				j = i;
				i = i->next;

				while (j->prev)
				{
					if (j->n < j->prev->n)
					{

						current = j;
						prev = current->prev;
						next = current->next;

						current->prev = prev->prev;
						prev->next = next;
						prev->prev = current;

						if (next)
							next->prev = prev;

						current->next = prev;

						if (current->prev)
							current->prev->next = current;
						else
						{
							*list = current;
						}

						print_list(*list);
					}
					else
						break;
					j = current;
				}
			}
		}
	}
}
