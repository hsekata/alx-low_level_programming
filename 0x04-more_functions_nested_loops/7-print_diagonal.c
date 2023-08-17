#include "main.h"

/**
 * print_diagonal - Test the _isalpha function
 *
 * @n: Number to pass to _isalpha function
 */
void print_diagonal(int n)
{
	int i, j;

	if (n >= 1)
    	{    
        	for(i = 0; i < n; i++)
        	{
			for (j = 0; j < i ; j++)
            		{
                		_putchar(' ');
            		}
            	_putchar('\\');
            	_putchar('$');
            	_putchar('\n');
        	}
    	}	
    	else
    	{
        	_putchar('\n');
    	}
}

