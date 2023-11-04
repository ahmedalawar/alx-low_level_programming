#include "main.h"
/**
*ssize_t read_textfile - reads a text file and prints it to the POSIX standard output.
*@filename: file name
*@letters: is the number of letters it should read and print
*Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	FILE *file;
	char *buffer;
	ssize_t b_read, b_write;
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	 buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	b_read = fread(buffer, 1, letters,file);

	if (b_read == -1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);

	 b_write = write(STDOUT_FILENO, buffer, b_read);

	free(buffer);

	if (b_write == -1 || b_write != b_read)
		return (0);
	return b_read;
}
