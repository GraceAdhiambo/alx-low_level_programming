#include "lists.h"
/**
  * print_listint - prints elements of list
  * @h: pointer to struct
  * Return: no.of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
