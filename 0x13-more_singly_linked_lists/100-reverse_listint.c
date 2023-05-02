#include "lists.h"
/**
  * reverse_listint - reverses linked list
  * @head: link to first node
  * Return: pointer to first node of reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}
	*head = last;
	return (*head);
}
