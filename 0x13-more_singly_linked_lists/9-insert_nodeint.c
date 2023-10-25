#include "lists.h"
/**
*insert_nodeint_at_index - inserts a new node at a given position.
*@head: pointer of pointer of linkedlist
*@idx: index of the new node
*@n: data of node
*Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	temp = *head;
	while (temp)
	{
		if (i == idx)
		{
			temp = new;
			new->next = temp;
			return (new);
		}
		else
		{
			i++;
			temp = temp->next;
		}
	}
	return (NULL);
}
