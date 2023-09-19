#include "monty.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: a pointer to the allocated memory, Otherwise, if nmemb or size is 0,
 * or malloc fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		if (list_opcode)
			free_list_opcode(list_opcode);
		exit(EXIT_FAILURE);
	}

	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;

	return (p);
}
/**
 * _div - Function that divides top values
 * @stack: stack structure
 * @line_number: Number of instructions
 */

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int n;

	n = stack_len(*stack);
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	temp->next->n /= temp->n;
	pop(stack, line_number);
}
/**
 * _mod - Function that mod top values
 * @stack: stack structure
 * @line_number: Number of instructions
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int n;

	n = stack_len(*stack);
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	temp->next->n %= temp->n;
	pop(stack, line_number);
}
/**
 * _div - Function that divides top values
 * @stack: stack structure
 * @line_number: Number of instructions
 */

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int n;

	n = stack_len(*stack);
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	temp->next->n /= temp->n;
	pop(stack, line_number);
}