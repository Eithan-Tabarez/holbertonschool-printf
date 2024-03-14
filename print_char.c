#include "main.h"

/**
* print_char - Print char.
* 
* @ch: argumento 
* Return: Result of the counter.
*/

int print_char(va_list ch)
{
    char c = va_arg(ch, int);

    _putchar (c);
    
    return(0);
}