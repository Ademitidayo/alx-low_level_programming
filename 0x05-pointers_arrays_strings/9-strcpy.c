#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int g = 0;
	int x = 0;

	while (*(src + g) != '\0')
	{
		g++;
	}
	for ( ; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[g] = '\0';
	return (dest);
}
