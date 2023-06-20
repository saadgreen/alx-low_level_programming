#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,followed by a new line
 * @n: starting integer
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			printf(", ");
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			printf(", ");
		}
	}
	printf("\n");
}
