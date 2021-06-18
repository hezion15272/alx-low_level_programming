#include <stdio.h>

/**
 * main - holds a program that when executed
 * prints alphabet in lowercase and also in uppercase
 */
int main (void)
{
	int lch, uch;

		for(int lch = 'a'; lch <= 'z'; lch++)
		for (int upper_char = 'A'; uch <= 'Z'; uch++)
			putchar(lch, uch);
	return (0);
}
