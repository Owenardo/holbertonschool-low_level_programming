#include <stdio.h>
#include "lists.h"
/**
 * list_len - function
 * @h: const list_t poiner
 * Description: returns the number of elements linked list
 * Return: count
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
