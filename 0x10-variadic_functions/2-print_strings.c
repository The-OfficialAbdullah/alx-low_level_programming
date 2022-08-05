#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints string followed by a new line
 * @separator: string to be printed between strings
 * @n: number of string
 *
 * Return: void
 */
int print_string(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s n== NULL)
			s = "(nil);
		printf("%s", s);
		if (i < n - 1)
		{
		 printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
