#include "main.h"

/**
 * close_fd - closes the file
 * @fd: given file descriptor
 *
 * Return: none
 */

void close_fd(int fd)
{
	int close_flag;

	close_flag = close(fd);

	if (close_flag == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - entry point of program to copy contents of file to another file
 * @ac: number of passed arfuments
 * @argv: arguments passed
 *
 * Return: 1 on success, -1 on failure
 */

int main(int ac, char *argv[])
{
	int if_desc;
	int of_desc;
	int bytes_read;
	int bytes_written;
	char input_buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if_desc = open(argv[1], O_RDONLY);
	of_desc = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (if_desc == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (of_desc == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close_fd(if_desc);
		exit(99);
	}
	while ((bytes_read = read(if_desc, input_buffer, 1024)) > 0)
	{
		bytes_written = write(of_desc, input_buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close_fd(if_desc);
			close_fd(of_desc);
			exit(99);
		}
	}
	close_fd(if_desc);
	close_fd(of_desc);
	return (0);
}
