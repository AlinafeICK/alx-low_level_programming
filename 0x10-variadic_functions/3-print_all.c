#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - variadic function that prints anything
 * @format: a list of types of arguments passed
 * to the function
 *
 * Returns: prints anything passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char *seprt = "";
	char *str;
	int int_val;
	float float_val;
	const char *format_char = format;

	while (format_char && *format_char)
	{
		if (*format_char == 'c')
		{
			int_val = va_arg(args, int);
			printf("%s%c", seprt, int_val);
		}
			else if (*format_char == 'i')
			{
				int_val = va_arg(args, int);
				printf("%s%d", seprt, int_val);
			}
			else if (*format_char == 'f')
			{
				float_val = va_arg(args, double);
				printf("%s%f", seprt, float_val);
			}
			else if (*format_char == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", seprt, str);
			}
			seprt = ", ";
			format_char++;
		}
		va_end(args);
		printf("\n");
}
