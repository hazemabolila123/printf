#include <unistd.h>

/**
 * _putchar - A function that used to print the char on sdout
 * @c: Char will be printed
 *
 * Return: 1 if success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

