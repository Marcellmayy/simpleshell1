#include "shell.h"
/**
 *jomc_ main - entry point
 * Return: 0
 */

int jomc_main(void)
{
	char formt[128];

	while (1)
	{
		visualize_prompt();
		read_input(formt, sizeof(formt));
		initialise(formt);
	}

	return (0);
}
