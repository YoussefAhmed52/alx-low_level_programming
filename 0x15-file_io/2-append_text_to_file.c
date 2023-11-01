#include "main.h"
/**
 * _strlen - length of the string
 * @s: the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}
/**
 * append_text_to_file - create file
 * @text_content: text
 * @filename: file name
 * Return: 1 on success 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t b = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (length)
		b = write(file, text_content, length);
	close(file);
	return (b == length ? 1 : -1);
}
