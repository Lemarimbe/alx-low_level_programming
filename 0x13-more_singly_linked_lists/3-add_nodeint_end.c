#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds a new node to the end of a linked list
  *
  * @head: The head of the linked list
  *
  * @n: The value to add to the end of the linked list
  *
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list_item, *tempo;

	if (head)
	{
		new_list_item = malloc(sizeof(listint_t));
		if (new_list_item == NULL)
			return (NULL);

		new_list_item->n = n;
		new_list_item->next = NULL;

		if (*head == NULL)
		{
			*head = new_list_item;
			return (*head);
		}
		else
		{
			tempo = *head;
			while (tempo->next)
				tempo = tempo->next;

			tempo->next = new_list_item;
			return (tempo);
		}
	}

	return (NULL);
}
