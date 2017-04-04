#include "holberton.h"
/**
  * create_file - create a function that creates a file
  * @filename: points to file that we will be receiving
  * @text_content: the text that is being written
  * Return: 1 if successfull
  */
int create_file(const char *filename, char *text_content)
{
	int file, writeFile, len;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	writeFile = write(file, text_content, len);
	if (writeFile == -1)
	{
		close(file);
		return (-1);
	}
	if (close(file) == -1)
		return (-1);
	return (1);
}
