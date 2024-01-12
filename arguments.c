#include "main.h"
#include <stdarg.h>

/**
 * print_char - print character
 * @args: character arguments
 *
 * Return: number of characters
 */

int print_char(va_list args)
{
        int ch;

        ch = va_arg(args, int);
        return (_putchar(ch));
}

/**
 * print_string - print string characters
 * @args: string arguments
 *
 * Return: number of string characters
 */

int print_string(va_list args)
{
        int count = 0, index = 0;
        char *str;

        str = va_arg(args, char *);
        if (str == NULL)
                return (-1);
        while (str[index] != '\0')
        {
                _putchar(str[index]);
                index++;
                count += 1;
        }
        return (count);
}

/**
 * print_percent - print percent
 * @args: string argument
 *
 * Return: percent
 */

int print_percent(va_list args)
{
        char *str;

        str = "%";
        if (va_arg(args, int) == *str)
                return (*str);
        return (*str);
}

/**
 *print_digit - iterate through a digit
 *@args: an integer argument
 *
 *Return: number of digits printed
 */

int print_digit(va_list args)
{
        unsigned int abs, abs_num, count, count_num;
        int num;

        count = 0;
        num = va_arg(args, int);
        if (num < 0)
        {
                count += _putchar('-');
                abs = (num * -1);
        }
        else
                abs = num;

        abs_num = abs;
        count_num = 1;
        while (abs_num >= 10)
        {
                abs_num /= 10;
                count_num *= 10;
        }
        while (count_num >= 1)
        {
                count += _putchar(((abs / count_num) % 10) + '0');
                count_num /= 10;
        }
        return (count);
}

/**
 * print_integer - print integer
 * @args: integer argument
 *
 * Return: number of integers
 */

int print_integer(va_list args)
{
        return (print_digit(args));
}
