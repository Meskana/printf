#include "main.h"
/**
 * printf_str - prints string
 * @str: pointer
 * Return: integer
 */

int printf_str(char *str)
{
	int count = 0, i = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			count++;
			i++;
		}
	}
	_putchar('\n');
	return (count);
}
