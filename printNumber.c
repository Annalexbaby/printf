#include "main.h"

/**
 * printNumber - Prints the input
 *
 * @count: input int
 * @num: unsingned input int
 * Return: count + 1
 */

int printNumber(long num, int count)
{
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = num * -1;
	}
	if (num / 10)
	{
		count = printNumber(num / 10, count);
	}
	_putchar(num % 10 + '0');
	return (count + 1);
}
