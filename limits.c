#include "main.h"
#include <stddef.h>

/**
 * get_all_func - function containing all_func
 * @s: specifier passed
 *
 * Return: pointer to all_func or NULL
 */

int (*get_all_func(char s))(va_list)
{
        fmt format_s[] = {
                {"c", print_char},
                {"s", print_string},
                {"%", print_percent},
                {"d", print_digit},
                {"i", print_integer},
                {NULL, NULL}
        };
        int index = 0;

        while (format_s[index].spec)
        {
                if (s == format_s[index].spec[0])
                        return (format_s[index].print);
                index++;
        }
        return (NULL);
}
