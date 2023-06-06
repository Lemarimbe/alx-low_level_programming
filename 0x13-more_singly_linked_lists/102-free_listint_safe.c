#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return 0;

	current = *h;

	while (current)
	{
		count++;
		if (current->next >= current)
		{
			current->next = NULL;
			break;
		}

		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return count;
}

