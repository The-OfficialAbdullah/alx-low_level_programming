#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @ardv: an array of a command listed
 * Retrurn: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
