#include "monty.h"

/**
 * pall - Function that prints the stack
 * @stack: stack structure
 * @line_number: number of instruction
 */

void pall(stack_t **stack, UN unsigned int line_number)
{
	stack_t *temp = NULL;
	int n = 0;

	if (*stack == NULL)
		return;

	temp = *stack;

	while (temp)
	{
		n = temp->n;
		printf("%d\n", n);
		temp = temp->next;
	}
}
/**
 * pint - prints the value at the top of the stack
 * @stack: stack structure
 * @line_number: Number of instructions
 */

void pint(stack_t **stack, unsigned int line_number)
{


	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
/**
 * pchar - Function that prints character at the top
 * @stack: stack structure
 * @line_number: Number of instructions
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		if (list_opcode)
			free_list_opcode(list_opcode);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n < 0 || (*stack)->n >= 128)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		if (*stack)
			free_list_stack(*stack);
		if (list_opcode)
			free_list_opcode(list_opcode);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*stack)->n);
}

