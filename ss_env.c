#include "shell.h"

/**
 *setenv - set a new environment
 *@format: string input
 *return: always 0
 */
int joemac_setenv(const char *name, const char *value) 
{
  if (name == NULL || value == NULL) return -1;

  return setenv(name, value, 1);
}

unsetenv.c

#include "shell.h"

/**
 *unsetenv - remove an environment variable
 *@format: string input
 *return: always 0
 */

int joemac_unsetenv(const char *name)
{
  if (name == NULL) return -1;

  return unsetenv(name);
}

