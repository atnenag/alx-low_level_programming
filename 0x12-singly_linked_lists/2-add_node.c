#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * add_node - is afunction that add new node in the link
  * 
  * @head: double pointer to linked list
  * @str: string pointer
  * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int *dup;
	int len;

	list_t *new;
	new = (list_t *)malloc(sizeof(list_t));
	if(new == NULL)
		return (NULL);
	new->str =strdup(str);
	if(dup == NULL)
	{
		free(new);
		return(NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str =dup;
	new->len =len;
	new->next = *head;
	*head = new;
	return(new);
}
