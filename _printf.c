#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    _vprintf_alpha(format, args);
    _vprintf_decimal(format, args);
    va_end(args);

    return (0);
}
