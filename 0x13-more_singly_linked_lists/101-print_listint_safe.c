#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints the elements in a linked list
 * @head: head of listint_t type
 *
 * Return: size_t, number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes = 0;
	const listint_t *temp_h = head, *loop_node = NULL;
	const listint_t *visited[1024];

	if (head == NULL)
		exit(98);

	while (temp_h)
	{
		size_t i;

		for (i = 0; i < n_nodes; i++)
		{
			if (temp_h == visited[i])
			{
				loop_node = temp_h;
				printf("[%p] %d\n", (void *)temp_h, temp_h->n);
				printf("loop node: [%p] %d\n", (void *)loop_node, loop_node->n);
				exit(98);
			}
		}

		visited[n_nodes] = temp_h;
		printf("[%p] %d\n", (void *)temp_h, temp_h->n);
		temp_h = temp_h->next;
		n_nodes++;
	}

	return (n_nodes);
}

