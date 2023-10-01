#include "main.h"

/**
 * print_str - prints characcters
 * @format: argument character
 * @args: argument of type va_list
 *
 * Return:  return count of printed characters
 */
int print_str(const char *format, va_list args)
{
	int count = 0, i;
	char ch, *str;

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

	return (count);
}
