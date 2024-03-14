#include "main.h"

/**
* print_percent - Print a percent symbol.
* @pct: percent symbol.
* 
* Return: Always 0.
*/

int print_percent(va_list arg)
{
    (void)arg;

    write(STDOUT_FILENO,'%', 1);

    return (0);
}