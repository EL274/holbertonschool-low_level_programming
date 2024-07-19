#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 *print_strings the function that prints strings, followed by a new line
 *@separator:the string to be printed between the strings
 *@n: the number of strings passed to the function
 *
 * Return: return nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char  *str;

	va_start(args, n);
	for(i = 0; i < n; i++)
	{
		if(separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		str = va_arg(args, const char *);
			if( str == NULL)
			{
				printf("(nill)");
			}
			else 
			{
				printf("%s", str);
			}
		}
		va_end(args);
			printf("\n");
}
