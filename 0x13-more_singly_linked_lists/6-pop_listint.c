#include "lists.h"
/**
  * pop_listint - deletes head node
  * @head: pointer to first node
  * Return: rlements of deleted node or 0 if empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int k;

	if (!head || !*head)
		return (0);
	k = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (k);
}
