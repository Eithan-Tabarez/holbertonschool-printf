#include "main.h"

/**
 * pritn_string - Evaluate the cases.
 * 
 * Return: A counter.
*/

int print_format(char specifier, va_list ap)
{
    int count;

    count = 0;
    if (specifier == 'c')
        count += print_char(va_arg(ap, int));
    else if (specifier == 's')
        count += print_string(va_arg(ap, char *));
    else
        count += write(1,&specifier 1);
    return (count);
}
