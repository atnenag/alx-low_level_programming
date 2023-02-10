#include <stdio.h>
#include "lists.h"

/**
  * list_len - a function that returns the number of elements in a linked
  * @h: is the pointer parametr that points struct
  *
  * Return: number of elements in link
  */
size_t list_len(const list_t *h)
{
	size_t sets = 0;

	while (h)
	{
		sets++;
		h = h->next;
	}
	return (sets);
}
