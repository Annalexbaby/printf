#include "main.h"

/**
 * selector - pointer to char
 * @str: input identifier
 * Return: return value stored in the address
 */

int (*selector(char str))(va_list arg)
{
	if (str == 'c')
	{
		return (&identifier_c);
	}
	else if (str == 'd')
	{
		return (&identifier_d);
	}
	else if (str == 's')
	{
		return (&identifier_s);
	}
	return (0);
}
