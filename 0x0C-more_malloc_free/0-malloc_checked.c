#include <stdlib.h>
/**
 *create_array - array for prints a string
 *@n: size of newly allocated memory
 *
 *Return: pointer or NULL (if fail)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
