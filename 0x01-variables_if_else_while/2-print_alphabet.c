#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char alphabet_lower = 'a';
char alphabet_upper = 'A';
while (alphabet_lower <= 'z')
{
	putchar(alphabet_lower);
	alphabet_lower++;
}
while (alphabet_upper <= 'Z')
{
	write(1, &alphabet_upper, 1);
	alphabet_upper++;
}
putchar('\n');
return (0);
}
