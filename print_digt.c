#include "main.h"

/**
 * printf_digit_d - print a digit
 * @n: number to print
 * Return: return integer
 */
int printf_digit_d(int num)
{
	int count = 0, n;

	if (num == 0)
		return (0);

	n = num / 10;
	printf_digit_d(n);
	_putchar(num % 10 + '0');
	count += 1;
	return (count);
}
