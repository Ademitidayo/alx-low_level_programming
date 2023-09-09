#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t ade;
	ssize_t aded;
	ssize_t adeda;

	ade = open(filename, O_RDONLY);
	if (ade == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	aded = read(ade, buf, letters);
	adeda = write(STDOUT_FILENO, buf, aded);

	free(buf);
	close(ade);
	return (adeda);
}
