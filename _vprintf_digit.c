#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _vprintf_decimal(const char *format, va_list args)
{
    /*state 0 is the regular state*/
    /*state 1 is the % or specifier state*/
    int state = 0, n;
    char buff[32];
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
            case 'd':
            {
                int i;
                n = va_arg(args, int);

                num_to_string(n, 10, buff);
                for (i = 0; buff[i]; i++)
                {
                    _putchar(buff[i]);
                }
                break;
            }
            }
            state = 0;
        }
        format++;
    }
    return 0;
}