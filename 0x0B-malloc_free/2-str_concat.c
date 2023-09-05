#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen_recursion - fuction that counsists base case and calls function len
 * @s1: string on which concatnation is going to take place
 * 
 * @s2: the string to be added.
 *
 * return: returns pointer to the function
 */
char *str_concat(char *s1, char *s2);
{
	int i = 0, j = 0;

	char *ptr;

	ptr = char( *) malloc(sizeof(s1) + sizeof(s2))
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
