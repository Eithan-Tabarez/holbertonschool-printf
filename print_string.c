#include "main.h"
#include <string.h>

/**
* print_string - Print a string.
* 
*
*/

int print_strings(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] !='\0'; count++)
		{
			write(1, &c[count], 1);
		}
	}
	return (count);
}
