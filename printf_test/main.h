#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


/**
 * formatter - A new type describing a formatter.
 * @letter: A conversion specifier.
 * @f: A function pointer to a print function corresponding to letter.
 */
int _printf(const char *format, ...);
typedef struct formatter {
	char * letter;
	void (*f)(va_list list);
} format_me;
void (*converter(const char *))(va_list list);
void print_c(va_list list);
void print_s(va_list list);
void print_d(va_list list);
void print_i(va_list list);
void print_number(int n);


#endif
