#include "main.h"

void print_str(char *s)
{
    while (*s != '\0')
    {
        _putchar(*s);
        s++;
    }
}