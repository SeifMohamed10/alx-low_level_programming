#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: byts number
 * Return:  pointer to the allocated memory
 */
void *malloc_checked(unsigned int x)
{
	void *ptr;
	ptr =malloc(x);
	if(ptr==NULL)
		exit(98);
	return (ptr);
}
