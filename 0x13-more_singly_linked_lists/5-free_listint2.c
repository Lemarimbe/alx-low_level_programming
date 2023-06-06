#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - Frees a linked list by setting head to null
  * @head: The head of the linked list
  *
  * Return: Nada
  */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head)
	{
		while (*head)
		{
			temporary = (*head);
			*head = (*head)->next;
			free(temporary);
		}
	}
	

	free(*head);
	head = 0;
}
