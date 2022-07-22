#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: the pointer to string to print
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar('\0');
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
