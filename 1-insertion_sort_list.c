#include "sort.h"
/**
  *instertion_sort_list - it does insertion algorithm
  *@list: the list to sort
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = (*list);
	listint_t *next_node;

	if ((*list) == NULL || list == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
	{
		next_node = current->next;
		if (sorted == NULL || sorted->n >= current->n)
        	{
			current->prev = NULL;
			current->next = sorted;
			if (sorted != NULL)
				sorted->prev = current;
			sorted = current;
			(*list) = current;
		}
		else
		{
			while (sorted->next != NULL && sorted->next->n < current->n)
				sorted = sorted->next;
			current->prev = sorted;
			current->next = sorted->next;
			if (sorted->next != NULL)
				sorted->next->prev = current;
			sorted->next = current;
		}
		print_list(*list);
		sorted = (*list);
		current = next_node;
	}
}
