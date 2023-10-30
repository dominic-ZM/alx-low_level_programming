#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: given file to edit
 * @text_content: text to add to file end
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_desc;
	int bytes_written;

	if (filename == NULL)
		return (-1);
	f_desc = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
	{
		if (f_desc == -1)
		{
			return (-1);
		}
		else
		{
			close(f_desc);
			return (1);
		}
	}
	bytes_written = write(f_desc, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close(f_desc);
		return (-1);
	}
	close(f_desc);
	return (1);
}
