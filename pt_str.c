#include "holberton.h"
/**
 * pt_str - prints string
 * @list : list of argument type string
 * Return: the length of string printed out
 */
int pt_str(va_list list)
{
	int len = 0;

	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		return (0)
	}
	for (len = 0; s[len] != '\0'; len++)
	{
		_putchar(s[len]);
	}
	return (len);
}
