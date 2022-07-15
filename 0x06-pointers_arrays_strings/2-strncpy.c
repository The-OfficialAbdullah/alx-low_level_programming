#include "main.h"
#include <string.h>

/**
 * *_strncpy - copys string
 * @dest: first parameter
 * @src: second paramter
 * @n: third parameter
 *Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
