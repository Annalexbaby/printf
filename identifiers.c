#include "main.h"

/**
 * identifier_c - checks for the char identifier
 * @arg: input char
 * count: value
 * Return: count
 */

int identifier_c(va_list arg)
{
	int count;
	char inputChar = va_arg(arg, int);

	count = _putchar(inputChar);

	return (count);
}

/**
 * identifier_d - checks for the int identifier
 * @arg: input int
 * Return: count
 */

int identifier_d(va_list arg)
{
	int count;

	int val = va_arg(arg, int);

	count = printNumber(val, 0);

	return (count);
}

/**
 * identifier_s - checks for the string identifier
 * @arg: input string
 * Return: count
 */

int identifier_s(va_list arg)
{
	int count = 0;
	char *ptr = va_arg(arg, char *);

	if (ptr == NULL)
	{
		ptr = "(null)";
	}
	while (*ptr)
	{
		count += _putchar(*ptr);
		ptr++;
	}

	return (count);
}

/**
 * identifier_b - checks for binary
 * @arg: input Binary
 * Return: 32
 */

int identifier_b(va_list arg)
{
	int val = va_arg(arg, int);

	printBinary(val);

	return (32);
}
