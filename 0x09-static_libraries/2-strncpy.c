/**
 * _strncpy - copies string from one to other
 * @dest: the destination string
 *@src: carries source string
 * Return: returns pointer as dest.
 * 
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
