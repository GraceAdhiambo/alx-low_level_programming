#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning list
 * @head: double pointer to the list_t
 * @str: new string to add
 * Return: the address of the new element if success,NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *str1;
	unsigned int str_length = 0;

	while (str[str_length])
		str_length++;
	str1 = malloc(sizeof(list_t));
	if (!str1)
		return (NULL);

	str1->str = strdup(str);
	str1->len = str_length;
	str1->next = (*head);
	(*head) = str1;

	return (*head);
}
