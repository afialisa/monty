#include "monty.h"

void execute(FILE *file);

/**
 * main - Monty code interpreter
 * @argc: Number of arguments
 * @argv: Monty file location
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	execute(file);

	fclose(file);
	return (0);
}

/**
 * execute - A function that executes monty commands
 * @file: file pointer
 */
void execute(FILE *file)
{
	size_t size = 0;
	ssize_t read_line = 1;
	char *content = NULL;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		counter++;

		if (read_line > 0)
		{
			/* Implement logic using content, stack, counter, and file */
		}

		free(content);
	}

	free_stack(stack);
}
