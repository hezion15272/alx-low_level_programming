#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters to a string to uppercase
 * @s: holds the content of the string
 *
 * Return: output the results
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
