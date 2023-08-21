#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to character type
 *
 */
void puts2(char *str)
{
	int count = 0, i = 0, j;

	while (str[i] != '\0')
	{
		count += 1;
		i++;
	}
	for (j = 0; j < count; j++)
	{
		char val;

		if ((j % 2) != 0)
			continue;
		else
		{
			val = str[j];
			_putchar(val);
		}
	}
	_putchar('\n');
}


