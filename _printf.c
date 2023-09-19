#include "main.h"

/**
 * _printf - function to print
 * @format: pointer to chars
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list input;

	int i;
	int ncount = 0;

	va_start(input, format);

	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c' || format[i] == 'd' || format[i] == 's')
			{
				ncount += selector(format[i])(input);
			}
			else if (format[i] == '%')
			{
				ncount += _putchar('%');
			}

			else
			{
				ncount += _putchar('%');
				ncount += _putchar(format[i]);
				continue;
			}
		}
		else
		{
			ncount += _putchar(format[i]);
		}
	}

	return (ncount);
}
