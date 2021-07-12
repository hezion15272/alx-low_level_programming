#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: counts the number of arguments passed
 * @argv: displays an array of arguments recieved
 * Return: Always 0 (Success)
 */
int main(int argc, char *agv[] __attribute__((unused)))
{
	print("%d\n", argc -1);
	return (0);
}
