#include "lists.h"
/**
*add_node_end - function that adds a new node at the end of a list_t list.
*@head: first node of linked list.
:@str: needs to be duplicated
:Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (list_t == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		head = head->next;
	}
	head = new;
	new->str = strdup(str);
	new->len = strlen(str);
	return (new);
}
