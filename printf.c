#include "main.h"

/**
 * precentageCases - All the precentage cases can be passed to printf
 * @c: Charachter to that shows which case will be done
 * @arg: Parameter of type va_list
 *
 * Return: Length of string
 *
 */
int precentageCases(char c, va_list arg)
{
	int cnt = 0;

	switch (c)
	{
	case '%':
	_putchar('%');
	cnt++;
	break;
	case 'c':
	_putchar(va_arg(arg, int));
	cnt++;
	break;
	case 's':
	cnt += printstr(va_arg(arg, char *), NULL);
	break;
	case 'r':
	cnt += printstr(va_arg(arg, char *), revstr);
	break;
	case 'R':
	cnt += printstr(va_arg(arg, char *), rot13);
	break;
	}

	return (cnt);
}

/**
 * numbercases - A finction that determine which case that will handel
 * @c: Charachter to that shows which case will be done
 * @num: The number
 * @buffer: String
 *
 * Return: Count of the string
 */
int numbercases(char c, long int num, char *buffer)
{
	int cnt = 0;

	switch (c)
	{
	case 'd':
	case 'i':
	cnt += print_int(num, buffer);
	break;

	case 'b':
	cnt += print_binary(num, buffer);
	break;

	case 'u':
	cnt += print_uint(num, buffer);
	break;

	case 'o':
	cnt += print_octal(num, buffer);
	break;

	case 'x':
	cnt += print_hex(num, buffer, 0);
	break;

	case 'X':
	cnt += print_hex(num, buffer, 1);
	break;
	}

	return (cnt);
}
/**
 * _printf - A function similar to printf
 * @format: A string to be printed
 *
 * Return: Length of the string
 *
 */
int _printf(const char *format, ...)
{
	int i, cnt = 0;
	char buffer[100];
	va_list ptrcnt;

	va_start(ptrcnt, format);

	if (format == NULL)
		return (-1);

	for (i = 0; (format != NULL && format[i] != '\0'); i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			else if (format[i] == '%' || format[i] == 's' || format[i] == 'c' ||
					format[i] == 'r' || format[i] == 'R')
				cnt += precentageCases(format[i], ptrcnt);
			else if (format[i] == 'i' || format[i] == 'd')
				cnt += numbercases(format[i], va_arg(ptrcnt, int), buffer);
			else if (format[i] == 'b' || format[i] == 'u' || format[i] == 'o'
					|| format[i] == 'x' || format[i] == 'X')
				cnt += numbercases(format[i], va_arg(ptrcnt, unsigned int), buffer);
			else
				_putchar('%'), _putchar(format[i]), cnt += 2;

		}
		else
		{
			_putchar(format[i]);
			cnt++;
		}
	}
	va_end(ptrcnt);

	return (cnt);
}
