#include "monty.h"

/**
 * free_all - Function that frees all the memory heap
 * @list: List of instructions
 * @stack: List of stack
 */
void free_all(list_t *list, stack_t *stack)
{
	if (list_opcode)
		free_list_opcode(list);
	if (stack)
		free_list_stack(stack);
}
/**
 * free_list_stack - Function that frees memory of the stack
 * @head: Head of the stack
 */
void free_list_stack(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
/**
 * free_list_opcode - Function that frees the opcode linked list
 * @head: Head of the linked list
 */
void free_list_opcode(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->inst);
		free(temp);
	}
}
