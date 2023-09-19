#include "monty.h"

/**
 * _strdup - Function that returns a pointer to a newly allocated memory
 * @str: String to be allocated
 * @fp: open file
 * Return: Return a string allocated or NULL if it fails
 */

char *_strdup(char *str, FILE *fp)
{
	int i;
	char *new;

	if (str == NULL)
		return (NULL);

	i = _strlen(str);

	new = _calloc(i + 1, sizeof(char));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		if (list_opcode)
			free_list_opcode(list_opcode);
		fclose(fp);
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < str[i]; i++)
		new[i] = str[i];

	new[i] = '\0';

	return (new);
}
/**
 * _strlen - Function that calculates a length of string
 * @str: String to be checked
 * Return: The length of string or -1 if it fails
 */

int _strlen(char *str)
{
	int i;

	if (str == NULL)
		return (-1);

	for (i = 0; str[i]; i++)
		;

	return (i);
}
/**
 * pstr - Function that prints string of the stack
 * @stack: stack structure
 * @line_number: number of instruction
 */
void pstr(stack_t **stack, UN unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack == NULL)
	{
		putchar(10);
		return;
	}

	temp = *stack;

	while (temp)
	{
		if (temp->n <= 0 || temp->n >= 128)
		{
			putchar(10);
			return;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	putchar(10);
}
