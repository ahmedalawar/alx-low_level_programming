#include "lists.h"
/**
*sum_listint - sum of all the data (n) of a listint_t linked list.
*@head: is apointer of the head of array
*Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
