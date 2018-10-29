#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct structtype - type of printf and function pointer
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: dog type
 */
typedef struct structtype
{
	char *print_type;
	int (*f)();
} struct_type;

int _strlen(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
int pt_char(va_list list);
int pt_str(va_list list);
int pt_integer(va_list list);
int pt_check(const char *format, struct_type *print_out, va_list list);

#endif
