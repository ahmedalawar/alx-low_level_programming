#include "lists.h"
/**
*list_len - function that returns the number of elements
*	in a linked list_t list.
*@h: head of linked list.
*Return: 0 if done , 1 case error
*/
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
