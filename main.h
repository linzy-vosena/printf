#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include  <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(const char *format, va_list args);

#endif /* end PRINTF_H */
