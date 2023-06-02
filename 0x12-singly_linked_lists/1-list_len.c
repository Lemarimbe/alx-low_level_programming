#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t  count = 0;

	current = h;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
