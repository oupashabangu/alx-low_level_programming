#include "lists.h"

/**
 * list_len - number of elements
 * @h: pointer to the list
 *
 * Reurn: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	int i;
	const list_t *c = h;

	for (i = 0; c; i++)
	{
		c = c->next;
		len++;
	}
	return (len);
}
