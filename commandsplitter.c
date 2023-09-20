#include "shell.h"

/**
 * _split - split the input into the command and it's arguments.
 *
 * @command: the input to be spliten.
 * @args: arguments to the command.
 *
 * Return: the total number of commands and arguments.
 */

int _split(const char *command, char *args[])
{
	const char delimiter[] = " \t\n";
	char *token = strtok((char *)command, delimiter);
	int count = 0;

	while (token != NULL)
	{
		args[count] = token;
		token = strtok(NULL, delimiter);
		count++;



	}
	args[count] = NULL;

	return (count);
}
