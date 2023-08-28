#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to replace
 *@n: bytes of memory to be replaced
 *Return: pointer to the function
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsignrd int i;

	for(i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
