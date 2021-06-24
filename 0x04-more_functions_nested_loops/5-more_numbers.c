#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, ch;

	i = 0;
	while (i < 10)
	{
		i++;
			for (ch = 0; ch < 15; ch++)
			{
				if (ch >= 10)
				{
					_putchar(ch / 10 + '0');
				}
				_putchar(ch % 10 + '0');
			}
		_putchar('\n');
	}
}
