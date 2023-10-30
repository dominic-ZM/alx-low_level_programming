#include "main.h"

/**
 * create_file - create  a file
 * @filename: name to be given to file
 * @text_content: pointer to text to be written
 *
 * Return: 1 on success, -1 if any failure
 */

int create_file(const char *filename, char *text_content)
{
	int f_desc;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	f_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f_desc == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(f_desc);
		return (1);
	}
	bytes_written = write(f_desc, text_content, strlen(text_content));

	if (close(f_desc) == -1)
		return (-1);

	if (bytes_written == -1)
		return (-1);
	else
		return (1);
}
