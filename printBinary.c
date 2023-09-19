#include "main.h"

/**
 * printBinary - prints an assigned binary
 * count: integer
 * @num: local variable
 * biMask: variable for binary
 * binaryDigit: input binary value
 * Return: void
 */

void printBinary(int num)
{
	int count = 0;
	int biMask = 1 << 31;
	int binaryDigit;

	while (biMask > 0)
	{
		binaryDigit = (num & biMask) ? 1 : 0;
		_putchar(binaryDigit + '0');
		count++;
		biMask >>= 1;
	}

	if (count == 0)
	{
		_putchar('0');
	}
}
