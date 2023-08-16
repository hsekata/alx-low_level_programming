#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{   
    
    int i;
    int j[51];
    long int num[51];
    for (i =0; i < 50; i++)
    {   j[i] = i; 
        if (i > 1 && i <= 3)
        {
            num[i] = j[i] + j[i-1];
        }
        else if (i >=4)
        {
            num [i] = num[i-1] + num[i -2];
            if (num[i+1] >= 4000000)
                break;
        }
        else
        {
            num[0] = 1;
            num[1] = 2;
        }
    }    
  
    for (i =0; i <50; i++)
        {
        printf("%ld", num[i]);
        printf(", \n");
        }

printf("[%ld, %ld]", num[49], num[50] );
return (0);
}