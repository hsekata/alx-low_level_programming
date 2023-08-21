#include "main.h"
/**
 * print_rev - prints string followed by a new line
 * @s: pointer to character type
 *
 */
void print_rev(char *s)
{
     	int count = 0, i = 0, j;

    	while (s[i] != '\0')
    	{
        	count += 1;
        	i++;
    	}
    	for ( j = count; j >= 0; j--)
    	{
        	char val;

        	val = s[j];
        	_putchar(val);
    	}
	
}

