#include "main.h"

/**
* print_char - Print char.
* 
* @ch: argumento 
*
* Return: Result of the counter.
*/

int print_char(char c)
{
    write(1, &c, 1);
    
    return(0);
}
