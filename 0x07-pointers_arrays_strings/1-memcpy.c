#include "main.h"

/**
 * _memcpy - copies n bytes memory area src
 * to memory area dest
 * @dest: destination
 * @src: number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
