#include "sort.h"

/**
 * insertion_sort_list - sort and prnts double linked list
 * using the Insertion sort algorithm.
 * @list: Pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *next_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	while (current != NULL)
	{
		next_node = current->next;
		while (current->prev != NULL && current->n < current->prev->n)
		{
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->prev->next = current->next;
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;
			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;
			print_list(*list);
		}
		current = next_node;
	}
}
