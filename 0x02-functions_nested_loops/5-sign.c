#include <unistd.h>
#include "main.h"

/**
 * print_sign - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
    	if (n > 0)
	{	
		_putchar('+');
	}
	else if (n == 0)
	{	
        	_putchar('0');
	}
	else 
	{
		_putchar('-');
	}
	
	return (0);
}
