#include "main.h"

/**
 * print_most_numbers - Test the _isalpha function
 *
 * @n: Number to pass to _isalpha function
 */


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

    	for (i = 0; i < 10; i++)
    	{
        	if ((i == 2) || (i == 4))
        	{
            		continue;
        	}	
        	else
        	{
            		_putchar(48 + i);
        	}
    	}
	_putchar('\n');
}
