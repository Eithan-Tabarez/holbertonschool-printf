#include "main.h"

/**
* print_string - Print a string.
* 
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list strings;
    const char *str;
    unsigned int i;

    va_start(strings, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(strings, const char *);

        if (str == NULL)
                write(STDOUT_FILENO, "(nil)", 5); /**para imprimir nil*/

        else
                write(STDOUT_FILENO, str, strlen(str)); /**para escribir la cadena**/

        if (i != (n - 1) && separator != NULL)
                write(STDOUT_FILENO, separator, separator_len); /**usando el separador si no es el ultimo elementos*/
    }

    write(STDOUT_FILENO, "\n", 1); /**salto de línea*/

    va_end(strings);
}
