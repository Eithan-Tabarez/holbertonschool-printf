#include "main.h"

/**
*
*
*
*/

int _printf(const char *format, ...)
{
    va_list ap;
    int count = 0;

    va_start(ap, format);

    while (*format != '\0')
    {
        if (*format == '%')
	{
            format++;
            if (*format == '\0')
                break;

            if (*format == 'c')
	    {
                char c = va_arg(ap, int);
                write(1, &c, 1);
                count++;
            }
	    else if (*format == 's')
	    {
                char *s = va_arg(ap, char *);
                if (s != NULL)
		{
                    while (*s != '\0')
		    {
                        write(1, s, 1);
                        s++;
                        count++;
                    }
                }
            }
	    else
	    {
                write(1, format, 1);
                count++;
            }
        }
	else
	{
            write(1, format, 1);
            count++;
        }
        format++;
    }

    va_end(ap);

    return count;
}
