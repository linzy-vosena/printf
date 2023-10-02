#include "main.h"

/**
 * get_case - picks case to deal with
 * @format: argument character
 * @args: argument of type va_list
 *
 * Return:  return count of printed characters
 */
int get_case(const char *format, va_list args)
{
	int count = 0;
	char ch, *str;

	switch (*format)
	{
		case 'c':
			ch = va_arg(args, int);
			count += _putchar(ch);
			break;
		case 's':
			str = va_arg(args, char *);
			count += print_str(str);
			break;
		case '%':
			count += _putchar(*format);
			break;
		default:
			count += _putchar(*--format);
			count += _putchar(*++format);
			break;
	}

	return (count);
}
