#include "lists.h"
/**
  * sum_listint - sums all data in list
  * @head: first node
  * Return: sim
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
