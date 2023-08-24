/**
 * _strncat - concatnats string from one to other
 * @dest: the destination string
 * @src: carries source string
 * @n: specifys number of bytes of src
 * Return: returns pointer as dest.
 * 
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, i;

	while (dest[i] != '\0')
	{
		count += 1;
		i++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[count + i] = src[i];
	dest[count + i] = '\0';

	return (dest);


}
