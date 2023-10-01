#include "main.h"

/**
 * print_str - prints a string
 * @str: string to print
 * Return: count of printed characters
 */
int print_str(char *str)
{
	int  count = 0, i;

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
	return (count);
}
