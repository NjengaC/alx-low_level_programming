#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * * _putchar - writes the character c to stdout
 * * @c: The character to print
 * *
 * * Return: On success 1.
 * * On error, -1 is returned, and errno is set appropriately.
 * */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
/**
 * read_textfile - reads from a fileand prints to stdout
 * @filename: text file`s name
 * @letters: number of letters to print
 *
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	FILE *fd;
	char *buf;
	ssize_t i = 0, j = 0;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
	{
		fclose(fd);
		return (0);
	}

	j = fread(buf, sizeof(char), letters, fd);
	if (j <= 0)
	{
		free(buf);
		fclose(fd);
		return (0);
	}

	buf[j] = '\0';

	while (buf[i])
	{
		_putchar(buf[i]);
		i++;
	}
	if (i != j)
		return (0);
	free(buf);
	fclose(fd);
	return (i);
}
