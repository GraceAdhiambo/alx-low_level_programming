#include "lists.h"
#include <stdlib.h>
/**
  * list_len - returns no.of elements in list_t
  * @h: pointer
  * Return: no.of elements
  */
size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
