#include "library.h"

/**
 * print_line - Test the _isalpha function
 *
 * @n: Number to pass to _isalpha function
 */


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

    	for (i = 0; i <= n; i++)
    	{	
        	if (n <= 0)
        	{
            	_putchar('\n');
            	break;
        	}
        	else
        	{
            	_putchar('_');
        	}
   	 }
    	_putchar('\n');
}

