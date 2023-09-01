#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: input number
 *
 * Return: Binary
 */
void print_binary(unsigned long int n)
{
	int a, b, c = 0;
	unsigned long int d = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	for (a = 0; a < (int)sizeof(unsigned long int) * 8; a++)
	{
		b = (n & d) >> (sizeof(unsigned long int) * 8 - 1 - a);
		if (b == 1)
		{
			c = 1;
		}
		if (c == 1)
		{
			_putchar('0' + b);
		}
		d = d >> 1;
	}
}
