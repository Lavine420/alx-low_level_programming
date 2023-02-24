#include "main"
#include <stdio.h>

/**
 * _putchar - write a character to the stdout
 * @c: the character to print
 * Return: on success 0
 * on error -1 is returned, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
