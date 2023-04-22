#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints element to newline
 * @array: array
 * @size: how many element to be printed
 * @action: pointer to print in regular or hex
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
