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

	switch (*format)
	{
		case 'c':
			ch = va_arg(args, int);
			count += _putchar(ch);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str != NULL)
			{
				for (i = 0; str[i] != '\0'; i++)
					count += _putchar(str[i]);
			}
			else
			{
				str = "(null)";
				for (i = 0; str[i] != '\0'; i++)
					count += _putchar(str[i]);
			}
			break;
		case '%':
			count += _putchar(*format);
			break;
	}

	return (count);
}
