#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_str - entry point
 *@ptr: pointer to the string
 *Description: print string with putchar
 */
void p_str(va_list list)
{
	char *ptr = va_arg(list, char *);

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
}
