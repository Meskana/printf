#include "main.h"

/**
 * _printf - mimic standard printf
 * @format: pointer
 * Return: integer
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	int s;
	va_list list;

	if (!format)
		return (-1);
	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(list, int));
			i++;
			count++;
		}
		else if (format[i + 1] == 's')
		{
			s = printf_str(va_arg(list, char *));
			i++;
			count += (s - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			count++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			s = printf_digit_d(va_arg(list, int));
			i++;
			count += (s + 1);
			_putchar('\n');
		}
	}
	va_end(list);
	return (count);
}
