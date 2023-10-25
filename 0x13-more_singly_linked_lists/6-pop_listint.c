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

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		return ((*head)->n);
		free(temp);
	}
}
