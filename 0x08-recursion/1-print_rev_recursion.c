#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: string
 *
 *Return: returns the reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
