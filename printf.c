#include "main.h"

/**
 * _printf - custom printf function
 * @format: string of characters
 *
 * Return: count of printed characters
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL || !format)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			/* introduce function to handle different case*/
			count += print_str(format, args);
		}
		else
		{
			count += _putchar(*format);
		}

		format++;
	}

	va_end(args);

	return (count);
}
