#include "monty.h"
/**
 * get_op_func - selects the correct function based on the provided opcode
 * @s: char parameter
 *
 * Return: function pointer
 */
void (*get_op_func(char *s))(stack_t **stack, unsigned int l, char *n)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].opcode != NULL)
	{
		if (strcmp(ops[i].opcode, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
