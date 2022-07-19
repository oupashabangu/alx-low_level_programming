#include "lists.h"

/**
 * free_listint - insert node in the end of the list
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
