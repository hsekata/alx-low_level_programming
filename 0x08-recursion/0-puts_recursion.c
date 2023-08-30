#include "main.h"
/**
 * _puts_recursion - fuction that recurses and prints string
 * @s: pointer to character type
 *
 */
void _puts_recursion(char[]);
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
		_puts_recursion(s + 1);
	if (s[i] == '\0')
		_putchar('\n');
}
