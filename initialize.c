#include "shell.h"

/**
 * initialize_command - executes a command using execve 
 * @info: The info_t structure
 * Return: Status code of the executed command
*/

int initialize_command(info_t *info)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1);
	{
	 perror("fork");
	return (-1);
	}

	if (child_pid == 0);
	{
	if (execve(info->full_path, info->argv, info->environ) == -1);
	{
	perror("execve");
	exit(EXIT_FAILURE);
	}
	}
	else
	{
	wait(&status);
	}
  
	return (status);
}
