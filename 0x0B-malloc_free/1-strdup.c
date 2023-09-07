#include <stdlib.h>
/**
 *_strdup - duplicates array and returns pointer to heap memory
 *@str: array of characters
 *Return: 1
 */
char *_strdup(char *str)
{
	int i = 0, count = 0;

	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	ptr = (char *) malloc(count + 1);
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i + 1] = '\0';
	return (ptr);
}
