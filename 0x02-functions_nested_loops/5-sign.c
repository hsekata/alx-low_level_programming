#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
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
		putchar('-');
	}
}
