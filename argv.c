#include "monty.h"

/**
 * check_arg - Function that checks if is a valid argument
 * @buff: buffer to be checked
 * Return: 0 if it fails or a positive number otherwise
 */
int check_arg(char *buff)
{
	int i;

	if (buff[0] == '-' || buff[0] == '+')
	{
		if (buff[1] < '0' || buff[1] > '9')
			return (0);
	}
	else if (buff[0] < '0' || buff[0] > '9')
		return (0);

	for (i = 1; buff[i] && buff[i] != ' '; i++)
		if (buff[i] < '0' || buff[i] > '9')
			return (0);

	return (1);
}

/**
 * cpy_arg - function that copies argument of push in buffer
 * @buff: buffer to be copied the argument
 * @t: linked list of instructions
 * Return: 0 if it fails or other positive number otherwise
 */
int cpy_arg(list_t *t, char *buff)
{
	int i, j;

	for (i = 0; i < 10024; i++)
		buff[i] = 0;

	for (i = 5, j = 0; t->inst[i] != '\0' && t->inst[i] != ' '; i++, j++)
		buff[j] = t->inst[i];

	buff[j] = '\0';

	return (j);
}
