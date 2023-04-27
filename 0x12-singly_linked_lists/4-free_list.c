#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tr;

	while (head)
	{
		tr = head->next;
		free(head->str);
		free(head);
		head = tr;
	}
}
