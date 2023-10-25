#include "lists.h"
/**
*pop_listint - deletes the head node of a listint_t linked list,
*	and returns the head node’s data (n).
*@head: pointer of head of linked list
*Return: head nodes data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		i = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (i);
	}
}
