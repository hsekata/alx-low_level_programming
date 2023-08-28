/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to replace
 *@n: bytes of memory to be replaced
 *Return: pointer to the function
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsignrd int i = 0;

	while (s[i] != '\0')
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
