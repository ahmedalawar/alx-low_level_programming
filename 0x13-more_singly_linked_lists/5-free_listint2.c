#include "lists.h"
/**
*free_listint2 - frees a listint_t list.
*@head: pointer of pointer of linkedlist head
*/
void free_listint2(listint_t **head)
{
	while (*head)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;

}
