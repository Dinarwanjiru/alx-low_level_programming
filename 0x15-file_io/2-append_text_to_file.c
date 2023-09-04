#include "main.h"
/**
 * append_text_to_file -appends text at the end
 * @filename: name of the file to be appended
 * @text_content: string to add at the end of string
 * Return: 1 for success or -1 for failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
	{
	int abc = 0, a = 0, b = 0;

	if (filename == NULL)
		return (-1);
	abc = open(filename, O_WRONLY | O_APPEND);
	if (abc < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(abc, text_content, b);
		if (a < 0)
			return (-1);
	}
	close(abc);
	return (1);
	}
