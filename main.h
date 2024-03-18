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
int print_strings(char *c);
int print_percent(va_list ap);
int print_char(char c);





#endif
