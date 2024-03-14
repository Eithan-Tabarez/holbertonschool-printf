#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);

void print_strings(const char *separator, const unsigned int n, ...);
int print_percent(va_list pct);
int print_char(va_list ch);





#endif