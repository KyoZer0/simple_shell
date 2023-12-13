#include "main.h"

/**
 * main - program entry point.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 in success, 1 in failure.
 */

int main(int argc, char **argv)
{
	char *userInput, **cmd;
	int index, executionStatus = 0;

	(void) argc;
	userInput = NULL, cmd = NULL;
	index = 0;
	while (1)
	{
		userInput = getUserInput();

		if (userInput == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (executionStatus);
		}
		index++;
		cmd = tokenizeString(userInput);
		if (!cmd)
			continue;

		if (cmdExists(cmd[0]))
			handle_existing_cmd(cmd, &executionStatus);
		else
			executionStatus = executeCommand(cmd, argv, index);
	}
	return (0);
}
