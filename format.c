#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
        va_list args;
        int (*g)(va_list);
        int index = 0, counter = 0;

        va_start(args, format);
        if (format == NULL || (format[0] == '%' && format[1] == '\0'))
                return (-1);

        while (format != NULL && format[index] != '\0')
        {
                if (format[index] != '%')
                {
                        counter += _putchar(format[index]);
                        index++;
                }
                else
                {
                        if (format[index + 1] == '%')
                        {
                                counter += _putchar('%');
                                index += 2;
                        }
                        else
                        {
                                g = get_all_func(format[index + 1]);
                                if (g)
                                        counter += g(args);
                                else
                                        counter += _putchar(format[index]) + _putchar(format[index + 1]);
                                index += 2;
                        }
                }
        }
        va_end(args);
        return (counter);
}
