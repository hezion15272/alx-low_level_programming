#include "holberton.h"

/**
 * print_most_numbers - is a function that prints the numbers (0 through to 9)
 * excluding 2 and 4
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			putchar(c);
		}
	}
	putchar('\n');
}
