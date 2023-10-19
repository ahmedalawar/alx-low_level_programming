#include "lists.h"
/**
*add_node_end - function that adds a new node at the end of a list_t list.
*@head: first node of linked list.
*@str: needs to be duplicated
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = malloc(sizeof(list_t));

	if (new  == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while (temp)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	return (temp);
}
