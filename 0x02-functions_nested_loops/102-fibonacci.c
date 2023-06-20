#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int fib1 = 1;
	long int fib2 = 2;
	int i;

	printf("1, 2");
	for (i = 3; i <= 50; i++)
	{
		long int fib = fib1 + fib2;

		printf(", %ld", fib);
		fib1 = fib2;
		fib2 = fib;
	}

	printf("\n");
	return (0);
}
