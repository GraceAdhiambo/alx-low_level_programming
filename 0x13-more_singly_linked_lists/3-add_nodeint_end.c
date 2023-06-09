#include "lists.h"
/**
  * add_nodeint_end - adds node at thr end of list
  * @n: data for newnode
  * @head: listint member
  * Return: address of new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp_node->next)
		temp_node = temp_node->next;
	temp_node->next = new_node;
	return (new_node);
}
