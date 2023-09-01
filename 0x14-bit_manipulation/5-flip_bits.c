#include "main.h"
/**
 * flip_bits - returns the number of bits you would ne
 * ed to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int b = 0;

	while (a != 0)
	{
		b += a & 1;
		a >>= 1;
	}
	return (b);
}
