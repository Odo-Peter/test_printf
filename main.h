#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdint.h>

int _putchar(char c);
void print_char(char c);
void print_str(char *s);
void unsigned_num_to_string(uint64_t number, int base, char *buffer);
void num_to_string(int64_t number, int base, char *buffer);
int _vprintf_alpha(const char *format, va_list args);
int _vprintf_decimal(const char *format, va_list args);
int _printf(const char *format, ...);

#endif
