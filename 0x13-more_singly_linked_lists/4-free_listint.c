#include "lists.h"
/**
  * free_listint - frees list
  * @head: listint_t mamber
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
