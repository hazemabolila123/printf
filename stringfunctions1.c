#include "main.h"
/**
 * _strlen - A function that returns the length of the string
 * @str: String
 *
 * Return: Length of the string
 */
int _strlen(char *str)
{
	int i, cnt = 0;

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	return (cnt);
}

/**
 * _strdup - A function that duplicates the srring passed to it into new string
 * @str: String
 *
 * Return: Duplicated string
 *
 */
char *_strdup(char *str)
{
	char *strcp;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	strcp = malloc(sizeof(char) * (len + 1));

	if (strcp == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		strcp[i] = str[i];
	}
	strcp[i] = '\0';

	return (strcp);
}

/**
 * printstr - A function that prints a string passed to it
 * @str: String
 * @ptf: Pointer To Function to select the right function
 *
 * Return: Length of the string
 *
 */
int printstr(char *str, char *(*ptf)(char *))
{
	char nullcase = 0;
	int i, len = 0, cnt = 0;
	char *strcp = _strdup(str);

	if (strcp == NULL)
	{
		strcp = "(null)";
		nullcase = 1;
	}
	else if (ptf != NULL)
	{
		strcp = ptf(strcp);
	}

	len = _strlen(strcp);

	for (i = 0; i < len; i++)
	{
		_putchar(strcp[i]);
		cnt++;
	}

	if (nullcase != 1)
		free(strcp);

	return (cnt);
}

#include "main.h"
/**
 * revstr - A function that reverses a string.
 * @str : A string to be reversed.
 *
 * Return: Pointer to the first char in string
 */
char *revstr(char *str)
{
	char tmp = str[0];
	int i, cnt = 0;

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	for (i = 0; i < cnt; i++)
	{
		cnt--;
		tmp = str[i];
		str[i] = str[cnt];
		str[cnt] = tmp;
	}
	return (str);
}

/**
 * int2str - A function that converts integer to ascii
 * @num: the integer will be converted
 * @strout: String holds the same value of the number
 * @base: base
 *
 * Return: A pointer to the first occurunce in that string
 */

char *int2str(long int num, char *strout, int base)
{
	int i = 0, digit, sign = 0;
	unsigned long int cpnum;

	if (num >= 0)
		cpnum = num;
	else
	{
		cpnum = -1 * num;
		sign = 1;
	}

	if (cpnum == 0)
	{
		strout[i++] = '0';
		strout[i] = '\0';
		return (strout);
	}

	while (cpnum != 0)
	{
		digit = cpnum % base;
		strout[i++] = (digit > 9) ? ('a' + digit - 10) : ('0' + digit);
		cpnum /=  base;
	}

	if (sign == 1)
	{
		strout[i] = '-';
		i++;
	}

	strout[i] = '\0';

	revstr(strout);
	return (strout);
}
