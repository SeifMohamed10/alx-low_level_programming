#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the of list
 * @head: double pointer to the list_t list
 * @str: new string to add 
 *
 * Return: the address of the new element on Success null if failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int leng = 0;

	while (str[leng])
		leng++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->leng = leng;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
