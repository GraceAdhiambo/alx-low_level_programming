#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of linked list
 * @head: double pointer to the list_t
 * @str: string to aded in the new node
 * Return: address of the new elementon success, NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *str1;
	list_t *tempr = *head;
	unsigned int length = 0;

	while (str[length])
		length++;
	str1 = malloc(sizeof(list_t));
	if (!str1)
		return (NULL);
	str1->str = strdup(str);
	str1->len = length;
	str1->next = NULL;
	if (*head == NULL)
	{
		*head = str1;
		return (str1);
	}

	while (tempr->next)
		tempr = tempr->next;
	tempr->next = str1;
	return (str1);
}
