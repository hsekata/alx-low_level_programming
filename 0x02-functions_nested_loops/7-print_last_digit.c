#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - writes the character c to stdout
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
       int remainder;

       if (n > 0)
       {
       remainder = n % 10;
       _putchar(48 + remainder);
       return (remainder);
       }
       else 
       {
              n *= -1;
              remainder = n % 10;
              _putchar(48 + remainder);
              return (remainder);
      }
}
