#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list_t list to be freed.
 */
void free_list(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
