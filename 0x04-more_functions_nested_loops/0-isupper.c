#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character.
 * @a: alphabet to be checked
 * Return: 1 if uppercase and 0 if anything else
 */
int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
