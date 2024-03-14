#include "main.h"

/**
* print_char - Print char.
* 
* @ch: argumento 
*
* Return: Result of the counter.
*/

int print_char(va_list arg)
{
    char c = va_arg(ch, int);

    write(STDOUT_FILENO, c, 10);
    
    return(0);
}