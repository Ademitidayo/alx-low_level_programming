#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: number to the checked
 * Return: 1 if it matches the said parameter and 0 if not.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
