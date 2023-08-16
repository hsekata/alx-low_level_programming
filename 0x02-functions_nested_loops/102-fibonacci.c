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
    {  
	j[i] = i;
	
	if (i > 1 && i <= 3)
        {
            	num[i] = j[i] + j[i-1];
        }
        else if (i >=4)
        {
            	num [i] = num[i-1] + num[i -2];
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
        	if (i == 49)
        	{
           	 	break;
        	}
        	else
        	{
            		printf(", ");
        	}
        }
	printf("\n");
	
	return (0);
}

