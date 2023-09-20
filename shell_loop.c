	#include "shell.h"

	/**
	* shell_loop - to loop through all the already written function
	* @read: print out the shell ptompt
	* @split: the space between your command and your arguement
	* @fork: execute child process
	* @return: always 0
	*/

	int main(int argc, char **argv)
	{
	char *line;
	{
	while (1)
	{
	joemac_print("joemac_shell$$");

	line = read_command_input();

	char *command;
	command = joemac_command_split(line);
	if (command != NULL)
	{
	*command = '\0';
	}


	pid_t pid = fork();
	if (pid == 0)
	{
	execve(argv[0], argv, environ);
	exit(EXIT_FAILURE);
	}
	else
	{
	wait(NULL);
	}

	free(line);
	}

	return (0);
	}
