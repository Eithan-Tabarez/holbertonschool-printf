#include "main.h"

/**
* print_string - Print a string.
* 
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list strings;
    char *str;
    unsigned int i;

    va_start(strings, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(strings, char *);

        if (str == NULL)
            _putchar("(nil)");
        else
            _putchar("%s", str);

        if (i != (n - 1) && separator != NULL)
            _putchar("%s", separator);
    }

    _putchar("\n");

    va_end(strings);
}
