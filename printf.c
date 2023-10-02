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

	va_start(args, format);

	if (format == NULL || !format)
		return (-1);
	if (format[0] == '%' && !format[1])
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += get_case(format, args);
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
