#include "main.h"
/*
 * File: 101-natural.c
 * Auth: vincent kip
 */

#include <stdio.h>

/**
 * main - list all the naturak numbers below 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	int i, sum = 0

		for (i = 0; i < 1024; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
				sum += i;
		}

	printf("%d\n", sum);
	return (0);
}
