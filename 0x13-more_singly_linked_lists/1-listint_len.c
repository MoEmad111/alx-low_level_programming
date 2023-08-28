#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
