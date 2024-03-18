#include "main.h"

/**
*
*
*
*/

int _printf(const char *format, ...)
{    
    va_list *ap;
    int i;

    va_start(ap, format)
    i= 0;
    while (*format != '\0')
    {
        if (*format == '%')
            i += print_format(*(++format),ap);
        else
            i += write (1,format,1);
            format++;
    }
    va_end(ap)
    return(i);
    
}
