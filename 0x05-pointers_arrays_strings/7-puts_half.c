#include "main.h"

/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */
void puts_half(char *str)
{
	int i = 0, len = 0, r;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		r = len / 2;

	else
		r = (len + 1) / 2;

	for (i = r; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
