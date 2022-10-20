#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements
 *               in a linked list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of elements in the list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
a#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - finds the number of nodes in a list
 * @h: singly linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
