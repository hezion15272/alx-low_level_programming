#include "holberton.h"
/**
 * _strlen - is a function that calculate the length of the string
 * @s: is the variable that contains the string
 * Return: the value of c on success, else 0
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(++s));
}
