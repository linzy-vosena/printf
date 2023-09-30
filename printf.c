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
	char ch;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			/* introduce function to handle different case*/
			if (*format == 'c')
			{
				ch = va_arg(args, int);
				count += _putchar(ch);
			}
		}
		else
		{
			count += _putchar(*format);
		}

		format++;
	}

	va_end(args);
}
