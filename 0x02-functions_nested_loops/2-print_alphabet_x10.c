#include "main.h"

/**
* print_alphabet_x10 -> prints the lowercase alphabet
* Return: 0
*/
void print_alphabets_x10(void)
{
	int c, x;

	for (x = 0; x < 10; x++)
{
	for (c = 'a' ; c <= 'z' ; c++)
{
	_putchar(c);
}
	_putchar('\n');
}
}
