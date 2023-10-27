#include "main.h"

/**
 *_puts_recursion - prints a string followed by new line
 *@s: argument for a string
 *
 *Return: returns the pointer to the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}

