/**
 * _strlen_recursion - fuction that counsists base case and calls function len
 * @s: pointer to character type
 * @count: variable that counts length
 * @str: that points to the first character of s.
 */
int len(char *, int);
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (0 + len(s, 0));
}
int len(char *str, int count)
{	int i = 0;
 
	if (str[i] != '\0')
		i++;
		len(str + 1, count + 1);
	else
		return (count);
}
