#include <stdio.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
    char start, i;
    for(i = 0; i < 10 ; i++)
    {
        for(start = 'a'; start <= 'z'; start++)
            _putchar(start);
       _putchar('\n');
    }
}
int main(void)
{
    print_alphabet();
    return (0);
}
