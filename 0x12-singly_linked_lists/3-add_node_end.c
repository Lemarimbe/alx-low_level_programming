#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	mewNode = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[length])
		length++;
	newNode->len = length;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}
