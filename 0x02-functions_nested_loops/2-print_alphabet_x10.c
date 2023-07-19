#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet ten times, followed by a new line.
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
	}
	_putchar('\n');
}
