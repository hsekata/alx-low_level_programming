#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
    char start;

    int i;

    for (i = 0; i < 10 ; i++)
    {
        for (start = 'a'; start <= 'z'; start++)
        {
            _putchar(start);
        }
       _putchar('\n');
    }
}
