#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void print_strings(const char *separator, const unsigned int n, ...);
int print_percent(va_list pct);
int _printf(const char *format, ...);





#endif