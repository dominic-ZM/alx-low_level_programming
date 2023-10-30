#include "main.h"

/**
 * read_textfile - read a text file and print contens to POSIX standard out
 * @filename: name of provided file
 * @letters: number of letters read from file to print
 *
 * Description: if failed to open file, read file or write to POSIX
 * standard output, return 0
 *
 * Return: number of bytes actually written or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int input_desc;
	int total_written;
	int bytes_read;
	char input_buffer[4096];

	if (filename == NULL)
		return (0);

	input_desc = open(filename, O_RDONLY);

	if (input_desc == -1)
		return (0);

	total_written = 0;
	bytes_read = 1;

	while (letters > 4096 && bytes_read != 0)
	{
		bytes_read = read(input_desc, input_buffer, 4096);
		write(STDOUT_FILENO, input_buffer, bytes_read);

		total_written += bytes_read;
		letters -= 4096;
	}

	bytes_read = read(input_desc, input_buffer, letters);

	write(STDOUT_FILENO, input_buffer, bytes_read);

	total_written += bytes_read;

	close(input_desc);
	return (total_written);
}
