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
 * create_file - create file
 * @text_content: text
 * @filename: file name
 * Return: 1 on success 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t b = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		b = write(file, text_content, length);
	close(file);
	return (b == length ? 1 : -1);
}
