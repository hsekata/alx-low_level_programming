#include <stdlib.h>
/**
 *create_array - array for prints a string
 *@size: size of the array
 *@c: char
 *Return: pointer or NULL (if fail)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
