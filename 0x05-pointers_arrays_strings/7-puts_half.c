#include "main.h"

/**
 * puts_half - prints every other character of a string
 * @str: pointer to character type
 *
 */
void puts_half(char *str)
{
    	int count = 0, i = 0;

	int length_of_the_string;

    	while (str[i] != '\0')
    	{
        	count += 1;
        	i++;
    	}
    	if ((count % 2) == 0)
    	{
        	length_of_the_string = count / 2;
        	for (;length_of_the_string < count; length_of_the_string++)
        	{
            		char val;
            		val = str[length_of_the_string];
            		_putchar(val);
        	}
    	}
    	else
    	{
        	length_of_the_string  = (count - 1) / 2;
        	length_of_the_string += 1;
        	for (;length_of_the_string < count; length_of_the_string++)
        	{
            		char val;
        
            		val = str[length_of_the_string];
            		_putchar(val);
        	}
    	}
    	_putchar('\n');
    
}
