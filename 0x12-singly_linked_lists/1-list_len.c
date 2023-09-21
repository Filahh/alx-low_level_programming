#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int list_num = 0;

	while (h != NULL)
	{
		list_num++;
		h = h->next;
	}
	return (list_num);
}
