#include "holberton.h"
/**
 * pt_char - function to print single char
 * @list : argument lists
 * Return: printed char
 */
int pt_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}
