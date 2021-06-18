#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main = assigns a random number to int n everytime
 * it analyise the value assign to n
 * and get the last digit
 * it executes, and print the output 
 * betty style doc for function main goes there 
 */
int main(void)
{
	int n, lastDigit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %i is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %i is %d and is 0\n", n, lastDigit);
	else if (lastDigit < 6)
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, lastDigit);
	return (0);
}
