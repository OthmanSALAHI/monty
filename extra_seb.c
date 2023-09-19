#include "monty.h"

/**
 * sub - Function that sub top values
 * @stack: stack structure
 * @line_number: Number of instructions
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int n;

	n = stack_len(*stack);
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	temp->next->n -= temp->n;
	pop(stack, line_number);
}

/**
 * swap - Function that swaps top values
 * @stack: stack structure
 * @line_number: Number of instructions
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int n;

	n = stack_len(*stack);
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*stack != NULL)
			free_list_stack(*stack);
		exit(EXIT_FAILURE);
	}
	else if (n == 2)
	{
		temp = (*stack)->next;
		(*stack)->next = NULL;
		(*stack)->prev = temp;
		temp->prev = NULL;
		temp->next = *stack;
		*stack = temp;
	}
	else
	{
		temp = (*stack)->next;
		(*stack)->next = (*stack)->next->next;
		(*stack)->prev = temp;
		temp->next->prev = *stack;
		temp->prev = NULL;
		temp->next = *stack;
		*stack = temp;
	}
}
