#ifndef MAIN_H
#define MAIN_H

#define PROMPT "$ "

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

extern char **environ;

/**
 * struct cmd_map - struct mapping command names to their handlers
 * @cmd_name: name of the command
 * @handler: function to handle the command
 */
typedef struct cmd_map
{
	char *cmd_name;
	void (*handler)(char **, int *);
} cmd_map_t;

char *getUserInput(void);
char **tokenizeString(char *inputString);
int executeCommand(char **cmd, char **av, int index);
void freeResources(char **tokenArray, int i, char *inputString);
char *_getenv(char *var);
char *_getPath(char *command);

char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *str);
void print_error(char *name, char *cmd, int count);
void free2Darray(char **array);
char *_itoa(int count);
void _rev_string(char *s);

int cmdExists(char *cmd);
void handle_existing_cmd(char **cmd, int *status);
void exitShell(char **cmd, int *status);
void print_env(char **cmd, int *status);
#endif
