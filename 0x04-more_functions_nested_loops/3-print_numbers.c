#include <unistd.h>
#include "main.h"

/**
 * add - writes the int x and y to stdout
 * @x: The intiger to print
 *@y: The intiger to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(48 + i);
	}
}
