#include "lists.h"
/**
*add_node - function that adds a new node at
*	the beginning of a list_t list.
*@head: pointer of the added node
*@str: string in the node string needs to be dublicate
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new =  malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);	
	}
	else
	{
	new->str = strdup(str);
	new->next = *head;
	new->len = strlen(str);
	return (new);
	}
}
