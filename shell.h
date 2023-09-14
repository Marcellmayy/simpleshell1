#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>

/*for read/write buffer */
#define MAX_INPUT_SIZE 1024
#define MAX_ARG_COUNT 128
#define MAX_ALIASES 1024
#define READ_BUF_SIZE 1024

/* if using system getline() */
#define USE_GETLINE 
#define USE_STRTOK

/**
 * struct listr - singly linked list
 * @num: the number field
 * @str: a string
 * @next: points to the next node
 */
typedef struct listsr
{
	int num;
	char *str;
	struct listsr *next;
} list_t;

/**
 * struct info - contains psuedo-arguement to pass into a function, allowing uniform prototype for function pointer struct
 * @arg: a strong generated from getline containing arguement
 * @argv: an array of strings generated from arg
 * @path: a string path for the current command 
 * @argc: the arguement count
 * @line_count: the error count
 * @err_num: the error code for exit() 
 * @linecount_flag: if on count this line of input
 * @fname: the program filename
 * @env: linked list local copy of environ
 * @environ: custom modified copy of from LL env
 * @alias: the alias node
 * @env_changed: on if environ was changed 
 * @status: the return status of the last exce'd comment
 * @cmd_buff: address of pointer to cmd_buff, on if chaining
 * @cmd_buff_type: cmd_type ||, &&, ;
 * @readfd: the fd from which to read line input
 */


typedef struct passinfo
{
	char *arg;
	char **argv;
	char *path;
	int argc; 
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *alias;
	char **environ;
	int env_changed;
	int status;

	char **cmd_buff;
	int cmd_buff_type;
	int readfd;
} info_t

/************FUNTIONS************/
void joemac_print(char *string, int descriptor);
void visualize_prompt(void);
int initialize_command(info_t *info);

#endif /*SHELL_H*/
