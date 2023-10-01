#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include  <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int get_case(const char *format, va_list args);

int print_str(char *);

#endif /* end PRINTF_H */
