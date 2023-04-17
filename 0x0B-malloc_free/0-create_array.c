#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size size of array
 * @c is char to assign
 * create array of size size and assign char c
 * Return: pointer to array, NULL when  fail
 *
 */
char *create_array(unsigned int size, char x)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = x;
	return (str);
}
