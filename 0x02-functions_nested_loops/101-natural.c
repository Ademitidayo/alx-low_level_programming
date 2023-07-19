#include "main.h"
#include <stdio.h>
/**
 * main - list all the natural numbers below 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	sum += i;
	}
	i++;
	}
	printf("%d\n", sum);
	return (0);
}
