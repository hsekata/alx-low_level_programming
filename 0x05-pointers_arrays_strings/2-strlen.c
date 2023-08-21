#include "main.h"

/**
 * _strlen - fuction that counts length of string
 * @s: pointer to character type
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int count = 0, i =0;

   	while (s[i] != '\0')
    	{
        	count += 1;
        	i++;
    	}
    	
    	return (count);
    
}
