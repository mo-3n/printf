#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - This function do something.
 *
 * @args: Argument description.
 *
 * Return: Return value description.
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_s - This function do something.
 *
 * @args: Argument description.
 *
 * Return: Return value description.
 */
int print_s(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * print_percent - This function do something.
 *
 * @args: Argument description.
 *
 * Return: Return value description.
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_d - This function do something.
 *
 * @args: Argument description.
 *
 * Return: Return value description.
 */
int print_d(va_list args)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}

/**
 * print_i - This function do something.
 *
 * @args: Argument description.
 *
 * Return: Return value description.
 */

int print_i(va_list args)
{
	return (print_d(args));
}
