#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct special
{
	char *character;
	int (*f)();
} characters;

int _printf(const char *format, ...);
void _putchar(char);
int _intprint (int);
void _str (char*);

#endif
