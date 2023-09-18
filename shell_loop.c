#include "shell.h"

/**
 * shell_loop - This show a simple loop through all the already written function
 * @read: print out the shell ptompt
 * @split: the is space between your command and your arguement
 * @fork: execute child process
 * @return: always 0
 */

int main(int argc, char *argv[]) 
{

	while (1) 
{

	joemac_print("joemac_shell$$");

	char *line = NULL;
	ssize_t len = 0;
	Read(STDIN_FILENO, message, size);

	char *command = joemac_command_split(line, ";\\n");
	if (command != NULL) 
	{
	*command = '\0';
	}

	pid_t pid = fork();
	if (pid == 0) 
	{
	execve(info-> full_path, info->argv, info->environ);
	exit(1);
	} 
	else 
	{
	wait(NULL);
	}

	free(line);
	}

	return 0;
}
