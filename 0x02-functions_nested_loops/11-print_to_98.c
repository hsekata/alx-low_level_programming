#include "main.h"
/**
 * print_to_98 - writes the integer c to stdout
 * @n: The integer to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
    while (n != 98)
    {
        if (n > 98)
        {   
            if ((n >= 100) && (n < 1000))
            {
                int last = n % 10;
                int second = n / 10;
                int second1 = second % 10;
                int first = n /100 ; 
                _putchar(48 + first);
                _putchar(48 + second1);
                _putchar(48 + last);
                _putchar(',');
                _putchar(' ');
                n -= 1;
            }
            else
            {
                int remainder = n % 10;
                int  first = n / 10;
                _putchar(48 + first);
                _putchar(48 + remainder);
                _putchar(',');
                _putchar(' ');
                n -= 1;
            }
        
        }   
        else
        {   if ((n >= 0) && (n < 10))
            {
                _putchar('0' + n);
                _putchar(',');
                _putchar(' '); 
                n +=1;
            }
            else if (n >= 10)
            {
                int remainder = n % 10;
                int  first = n / 10;
                _putchar(48 + first);
                _putchar(48 + remainder);
                _putchar(',');
                _putchar(' ');
                n += 1;
            }
            else 
            {   
                n = n * -1;
                if (n >= 10)
                {
                    int remainder = n % 10;
                    int  first = n / 10;
                    _putchar('-');
                    _putchar(48 + first);
                    _putchar(48 + remainder);
                    _putchar(',');
                    _putchar(' ');
                    n = n * -1;
                    n += 1;
                }
                else
                {   
                    _putchar('-');
                    _putchar('0' + n);
                    _putchar(',');
                    _putchar(' '); 
                    n = n * -1;
                    n +=1;
                }            
            }
        }
    }
    _putchar('0' + 9);
    _putchar('0' + 8);
    _putchar('\n');
}
