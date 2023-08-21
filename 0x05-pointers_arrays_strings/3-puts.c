#include "main.h"
/**
 * _puts - prints string followed by a new line
 * @str: pointer to character type
 *
 */
void _puts(char *str)
{
	int j, count = 0, i = 0;

	while (str[i] != '\0')
	{
		count += 1;
		i++;
	}
	for (j = 0; j < count; j++)
	{
		char val;

		val = str[j];
		_putchar(val);
	}
	_putchar('\n');
}
