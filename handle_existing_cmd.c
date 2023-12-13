#include "main.h"

/**
 * cmdExists - checks if a command exists.
 * @cmd: command to check.
 * Return: 1 if command exists, 0 if not.
*/

int cmdExists(char *cmd)
{
	char *existing_commands[] = {"exit", "env", NULL};
	int i = 0;

	while (existing_commands[i])
	{
		if (_strcmp(cmd, existing_commands[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

/**
 * handle_existing_cmd - handles existing commands
 * @cmd: command to handle
 * @status: status of the last execution
 *
 * Return: void
 */
void handle_existing_cmd(char **cmd, int *status)
{
	cmd_map_t commands[] = {
		{"exit", exitShell},
		{"env", print_env},
	};
	int num_commands = sizeof(commands) / sizeof(cmd_map_t);
	int i = 0;

	while (i < num_commands)
	{
		if (_strcmp(cmd[0], commands[i].cmd_name) == 0)
		{
			commands[i].handler(cmd, status);
			break;
		}
		i++;
	}
}

/**
 * exitShell - exits the shell.
 * @cmd: command to handle.
 * @status: status of the last execution.
 * Return: void.
*/

void exitShell(char **cmd, int *status)
{
	free2Darray(cmd);
	exit(*status);
}

/**
 * print_env - prints the environment.
 * @cmd: command to handle.
 * @status: status of the last execution.
 * Return: void.
*/

void print_env(char **cmd, int *status)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	*status = 0;
	free2Darray(cmd);
}
