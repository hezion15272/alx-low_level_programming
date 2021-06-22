#include "holberton.h"

/**
 * main - check the code for the ALX School student.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++
	}
	_putchar('\n');
}
