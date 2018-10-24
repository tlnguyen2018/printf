#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void p_putchar(va_list list)
{
	int a = va_arg(list, int);
	_putchar(a);
}
