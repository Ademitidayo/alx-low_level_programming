#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string
 *
 * Return: interger
 */
unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[a])
	{
		if (b[a] < '0' || b[a] > '1')
		{
			return (0);
		}
	result = result * 2 + (b[a] - '0');
	a++;
	}
	return (result);
}
