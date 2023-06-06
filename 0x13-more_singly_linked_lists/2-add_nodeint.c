#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: The address of the new element, or NULL if it failes
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list_item;

	if (head != NULL)
	{
		new_list_item = malloc(sizeof(listint_t));
		if (new_list_item == NULL)
			return (NULL);

		new_list_item->n = n;
		new_list_item->next = *head;
		*head = new_list_item;

		return (new_list_item);
	}

	return (NULL);
}
