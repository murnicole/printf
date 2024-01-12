#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct formatter - format specifier
 * @spec: specifier character
 * @print: functions
 */
typedef struct formatter
{
        char *spec;
        int (*print)(va_list);
} fmt;

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_digit(va_list args);
int print_integer(va_list args);
int (*get_all_func(char s))(va_list);
int _printf(const char *format, ...);

#endif
