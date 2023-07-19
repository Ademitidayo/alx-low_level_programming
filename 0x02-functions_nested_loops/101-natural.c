#include "main.h"

/**
 * main - list all the natural numbers below 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	int i, sum = 0

		while (i = 0; i < 1024; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
		{
		sum += i;
		}

	printf("%d\n", sum);
	return (0);
}
