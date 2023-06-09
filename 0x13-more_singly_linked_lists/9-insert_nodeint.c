#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to pointer to the first element of the list
* @idx: index of the list where the new node should be added
* @n: data to be stored in the new node
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *prev_node, *curr_node;
unsigned int i;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0 || *head == NULL)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

prev_node = NULL;
curr_node = *head;

for (i = 0;  i < idx && curr_node != NULL;  i++)
{
prev_node = curr_node;
curr_node = curr_node->next;
}

if (i < idx)
{
free(new_node);
return (NULL);
}

prev_node->next = new_node;
new_node->next = curr_node;

return (new_node);
}
