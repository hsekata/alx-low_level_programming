#include "main.h"

/**
 * print_diagonal - takes argument n
 *
 * @n: Number to pass to print_diagonal function
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
            	_putchar('\n');
        	}
    	}	
    	else
    	{
        	_putchar('\n');
    	}
}

