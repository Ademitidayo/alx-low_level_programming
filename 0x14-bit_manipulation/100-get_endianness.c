#include "main.h"
/**
 * get_endianness - unction that checks the endianness.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	int a = 1;
	char *b = (char *)&a;

	return ((*b == 1) ? 1 : 0);
}
