#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints single-digit numbers in base 10
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
