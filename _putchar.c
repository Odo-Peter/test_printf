#include <unistd.h>
/**
 * _putchar - prints a single char to the stdout
 * @c: the first params
 * Return: 0 for success or -1 if an error occurs
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}