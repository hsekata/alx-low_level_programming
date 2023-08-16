#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
    char start;

    int i;

    for (i = 0; i < 10 ; i++)
    {
        for(start = 'a'; start <= 'z'; start++)
            {
            _putchar(start);
            }
       _putchar('\n');
    }
}
