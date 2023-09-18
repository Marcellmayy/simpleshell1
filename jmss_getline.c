#include "shell.h"

/**
 * readLine: Read a line of text from the input.
 * This function reads a line of text from the standard input and returns
 * return A pointer to the dynamically allocated string containing the
 *         read line, or NULL if an error occurs or if the end of input
 *         is reached.
 */
#define READ_SIZE 1024

static char buff[READ_SIZE];
static int curr_pos;

char *readLine(void)
/*Read a line of text from the input*/
{
int read_numbytes;
char *input_line = NULL;

/* Read bytes from stdin into buff */
read_numbytes = read(STDIN_FILENO, buff, READ_SIZE);

if (read_numbytes <= 0)
{
return (NULL); /* If no bytes read or an error occurred, return NULL */
}

/* Null-terminate the buff */
buff[read_numbytes] = '\0';

/* Dynamically allocate memory for input_line */
input_line = malloc(read_numbytes + 1);
if (!input_line)
{
return (NULL); /* If memory allocation fails, return NULL */
}

/* Copy buff to input_line */
strcpy(input_line, buff);

/* Reset curr_pos to the start of buff */
curr_pos = 0;

return (input_line); /* Return the read line */
}
