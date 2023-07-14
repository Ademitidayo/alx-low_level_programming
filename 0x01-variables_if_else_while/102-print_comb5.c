#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int tens1 = i / 10;
			int ones1 = i % 10;
			int tens2 = j / 10;
			int ones2 = j % 10;

			putchar('0' + tens1);
			putchar('0' + ones1);
			putchar(' ');

			putchar('0' + tens2);
			putchar('0' + ones2);

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
