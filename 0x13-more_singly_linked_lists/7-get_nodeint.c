#include "lists.h"
/**
*get_nodeint_at_index - the nth node of a listint_t linked list.
*@head: pointer of the linkedlist.
*@index: index of the node
*Return: node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		else if (i < index)
		{
			i++;
			temp = temp->next;
		}
	}
	return (NULL);
}
