#include "main.h"

/**
*
*
*
*/

int _printf(const char *format, ...)
{
    int i = 0;
    /**
     * como recibimos los datos del usuario
     *i = input();
     */
    
    if (i != '\0' && i = "%%") /** como se pone el %, si tiene que ser antes*/
    {
        i++;

        switch(i)
        {
            case('c'):
            {
                print_char
            }
            break;
            case('s'):
            {
                print_strings
            }
            break;
        }
        i++;
        write(STDOUT_FILENO,'\n', 2);
    }
}
