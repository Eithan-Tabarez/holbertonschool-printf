#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>


int _printf(const char *format, ...);
int print_format(char specifier, va_list ap);
void print_strings(const char *separator, const unsigned int n, ...);
int print_percent(va_list pct);
int print_char(va_list ch);





#endif
