#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - finds the sum of all data of the linked list
  * @head: first node
  *
  * Return: sum of all the data
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
