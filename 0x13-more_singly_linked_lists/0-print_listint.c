#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all the elements of a linked list
  *
  *@h: The head of the linked list
  *
  * Return:  Number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			counter++;
		}
	}

	return (counter);
}
