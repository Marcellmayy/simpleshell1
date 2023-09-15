#include "shell.h"

/**
 * read_input - reads input
 * @format: string input
 * @size: size of string
 * return: 0
 */
void read_command_input(char *format, size_t size)
{
	size_t read_command;

	read_command = read(STDIN_FILENO, message, size);
	if (read_command = = -1)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}
	message[read_command - 1] = '\0';
}
