#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints single-digit numbers in base 10
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
