	#include "shell.h"

	int alias(char **args)
	{
	if (args[1] == NULL)
	{
	/* Print all aliases */
	for (int i = 0; i < MAX_ALIASES; i++)
	{
	if (aliases[i] != NULL)
	{
	printf("%s\n", aliases[i]);
	}
	}
	}
	else if (strchr(args[1], '=') != NULL)
	{
	/* Set alias */
	char *alias = args[1];
	char *val = strchr(alias, '=') + 1;
	*strchr(alias, '=') = '\0';

	for (int i = 0; i < MAX_ALIASES; i++)
	{
	if (aliases[i] == NULL)
	{
	aliases[i] = alias;
	break;
	}
	else if (strcmp(aliases[i], alias) == 0)
	{
	aliases[i] = alias;
	break;
	}
	}
	}
	else
	{
	/* Print specified alias names */
	for (int i = 1; i < MAX_ALIASES; i++)
	{
	if (aliases[i] != NULL && strcmp(aliases[i], args[i]) == 0)
	{
	printf("%s\n", aliases[i]);
	}
	}
	}

	return (0);
	}
