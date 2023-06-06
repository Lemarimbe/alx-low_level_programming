#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of listint_t type
 *
 * Return: size_t, the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp_h = *h, *loop_node = NULL;

	if (*h == NULL)
		return (0);

	while (temp_h)
	{
		if (*h == temp_h && size > 0)
		{
			loop_node = temp_h;
			break;
		}
		*h = temp_h->next;
		free(temp_h);
		temp_h = *h;
		size++;
	}

	if (loop_node != NULL)
	{
		size++;
		*h = NULL;
	}

	return (size);
}

