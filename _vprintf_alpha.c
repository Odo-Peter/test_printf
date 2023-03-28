#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

int _vprintf_alpha(const char *format, va_list args)
{
    /*state 0 is the regular state*/
    /*state 1 is the % or specifier state*/
    int state = 0;
    while (*format)
    {
        if (state == 0)
        {
            if (*format == '%')
            {
                state = 1;
            }
            else
            {
                _putchar(*format);
            }
        }
        else if (state == 1)
        {
            switch (*format)
            {
            case 'c':
            {
                print_char(va_arg(args, int));
                break;
            }
            case 's':
            {
                print_str(va_arg(args, char *));
                break;
            }
            }
            state = 0;
        }
        format++;
    }

    return 0;
}