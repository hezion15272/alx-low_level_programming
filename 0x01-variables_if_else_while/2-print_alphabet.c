#include <stdio.h>

/**
 * main - contains a sources code
 * that when executed,
 * prints the alphabet in lower case
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
