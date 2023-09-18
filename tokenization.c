#include "shell.h"

/**
 * split_on_delim - this iterates through the string to find delimeter characters
 * @info: structure containing potential arguements used to maintain 
 *  constant function prototype
 *  Return: always 0
 */

char joemac_command_split(char *str, const char *delim)
{
	char *token
	static char *part;

	if (str != null) 
	{
	*part = str;
	}

	token = part;

	while (part != null && *part != "")
	{
	if (part.Contains(delim))
	{
	*part = "";
	part++;  
	return token;
	}

	part++;
	}

	return null;
}
