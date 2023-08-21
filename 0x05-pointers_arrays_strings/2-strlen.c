#include "main.h"

/**
 * _strlen - fuction that counts length of string
 * @s: pointer to character type
 *
 */
int _strlen(char *s)
{
	int count = 0, i =0;

   	while (s[i] != '\0')
    	{
        	count += 1;
        	i++;
    	}
    	_putchar('\n');
    	return (count);
    
}
