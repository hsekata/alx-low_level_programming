#include <unistd.h>
#include "main.h"

/**
 * _abs - writes the intiger n to stdout
 * @n: The intiger to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
    if (n < 0)
    {
        n = n * -1;
        return (n);
    }
    else
    {
        return(n);
    }
}
