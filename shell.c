#include "shell.h"
/**
 *jomc_ main - entry point
 * 
 */
int jomc_main(void)
{
	char formt[128];

	while (1)
	{
		visualize_prompt();
		read_command_input(sizeof(formt));
		initialise(formt);
	}

	return (0);
}
