#include "lists.h"
/**
  * add_nodeint - adds node at the beginning
  * @head: pointer to first nodr in list
  * @n: data for new node
  * Return: pointer to new node, NULL otherwise
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
