#include "lists.h"
/**
*listint_len - returns the number of elements in a linked listint_t list.
*@h: head of linked list.
*Return: number of elements in linked list.
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t i = 0;

	while (ptr)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
