#include <unistd.h>
#include "main.h"

/**
 * mul - writes the character c to stdout
 * @a: The character to print
 * @b:  The intiger to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int a, int b)
{
	return (a * b);
}
