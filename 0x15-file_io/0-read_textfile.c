#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file, prints to POSIX stdout
 * @filename: file to be read
 * @letters: Number of letters to read and print
 * Return: read file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t reads;

	if (!filename)
	{
		return (0);
	}


	fp = fopen(filename, "r");

	if (!fp)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		fclose(fp);
		return (0);
	}

	reads = fread(buffer, sizeof(char), letters, fp);

	if (ferror(fp))
	{
		reads = 0;
	}

	fwrite(buffer, sizeof(char), reads, stdout);

	fclose(fp);
	free(buffer);

	return (reads);
}
