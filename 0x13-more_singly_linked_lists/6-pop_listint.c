#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - detetes head
  * @head: linked list first node
  *
  * Return: head's node data
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int data = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		data = (*head)->data;
		free(*head);
		*head = new_head;
	}

	return (data);
}
