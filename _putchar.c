#include <unistd.h>

/**
 * _putchar - This function do something.
 *
 * @c: Argument description.
 *
 * Return: Return value description.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
