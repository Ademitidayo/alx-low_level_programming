#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
