#include "main.h"
#include <stdarg.h>
#include <stdint.h>

void unsigned_num_to_string(uint64_t number, int base, char *buffer)
{
    int i, current = 0;
    char buff[65];

    if (number == 0)
    {
        *buffer++ = '0';
        *buffer = 0;
        return;
    }

    for (i = 0; i < 65; i++)
        buff[i] = 0;

    while (number)
    {
        int digit;
        digit = number % base;

        if (digit >= 10)
            buff[current++] = '0' + (digit - 10);
        else
            buff[current++] = '0' + digit;

        number /= base;
    }

    for (i = current - 1; i != 0; i--)
    {
        *buffer++ = buff[i];
    }

    *buffer++ = buff[0];
    *buffer = 0;
}

void num_to_string(int64_t number, int base, char *buffer)
{
    if (number < 0)
    {
        *buffer++ = '-';
        number = -number;
    }
    unsigned_num_to_string(number, base, buffer);
}