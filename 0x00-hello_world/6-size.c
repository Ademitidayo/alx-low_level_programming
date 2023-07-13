#include<stdio.h>
/**
 * main - a size printing program
 *
 * return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int d;
	long long int l;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)
sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)
sizeof(b));
printf("Size of an long int: %lu byte(s)\n", (unsigned long)
sizeof(d));
printf("Size of an long long int: %lu byte(s)\n", (unsigned long)
sizeof(l));
printf("Size of an float: %lu byte(s)\n", (unsigned long)
sizeof(f));
return (0);
}
