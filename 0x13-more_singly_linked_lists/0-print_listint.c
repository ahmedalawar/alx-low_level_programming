#include "lists.h"
/**
*print_listint - function that prints all the elements of a listint_t list.
*@h:pointer of firtt head of linked list
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t i = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
	return (i);
}
