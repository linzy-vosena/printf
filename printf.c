#include "main.h"

/**
 * _printf - custom printf function
 * @format: string of characters
 *
 * Return: count of printed characters
 */
int _printf(const char *format, ...)
{
	int count = 0, i;
	char ch, *str;
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
			if (*format == 's')
			{
				str = va_arg(args, char *);
				for (i = 0; str[i] != '\0'; i++)
					count += _putchar(str[i]);
			}
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
