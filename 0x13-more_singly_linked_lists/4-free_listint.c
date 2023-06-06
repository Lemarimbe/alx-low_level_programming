#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Frees a linked list
  *
  * @head: The head of the linked list
  *
  * Return: Nada
  */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head;
		head = head->next;
		free(temporary);
	}

	free(head);
}
