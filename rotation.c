#include "monty.h"

/**
 * rotl - Function that rotate the top of the stack
 * @stack: stack structure
 * @line_number: number of instruction
 */

void rotl(stack_t **stack, UN unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack == NULL)
		return;
	if ((*stack)->next == NULL)
		return;

	temp = (*stack);
	for (; temp->next; temp = temp->next)
		;

	temp->next = *stack;
	(*stack)->prev = temp;
	temp = (*stack)->next;
	(*stack)->next = NULL;
	temp->prev = NULL;
	*stack = temp;
}
/**
 * rotr - Function that rotate the top of the stack
 * @stack: stack structure
 * @line_number: number of instruction
 */
void rotr(stack_t **stack, UN unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack == NULL)
		return;
	if ((*stack)->next == NULL)
		return;

	temp = (*stack);
	for (; temp->next; temp = temp->next)
		;

	temp->prev->next = NULL;
	temp->next = *stack;
	temp->prev = NULL;
	(*stack)->prev = temp;
	*stack = temp;
}
