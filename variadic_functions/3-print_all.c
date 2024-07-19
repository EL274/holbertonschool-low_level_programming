#include"variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints anything followed by a new line.
 * @format: A string of characters representing the argument types:
 *          'c' for char, 'i' for int, 'f' for float, and 's' for string.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0, j;
    char *str;
    const char t_args[] = "cifs";
    const char *separator = "";

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        while (t_args[j])
        {
            if (format[i] == t_args[j])
            {
                printf("%s", separator);
                if (format[i] == 'c')
                    printf("%c", va_arg(args, int));
                else if (format[i] == 'i')
                    printf("%d", va_arg(args, int));
                else if (format[i] == 'f')
                    printf("%f", va_arg(args, double));
                else if (format[i] == 's')
                {
                    str = va_arg(args, char *);
                    if (str == NULL)
                        str = "(nil)";
                    printf("%s", str);
                }
                separator = ", ";
                break;
            }
            j++;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}
