#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n = NULL;
	if(!head || !*head)
		return (NULL);
	p = *head;
	*head = NULL;
	while (p)
	{
		n = p->n;
		p->n = *head;
		*head = p;
		p = n;
	}

	return (*head);
}
