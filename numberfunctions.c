#include "main.h"

/**
  * print_int - A function that prints the string which hold
  * the value of signed int number
  * @num: The number will be printed
  * @buffer: The string that hold the value of the number
  *
  * Return: Count of the string
  *
  */

int print_int(int num, char *buffer)
{
	int cnt = 0;
	char *strout = int2str(num, buffer, 10);

	while (*strout)
	{
		_putchar(*strout++);
		cnt++;
	}

	return (cnt);
}

/**
  * print_binary - A function that prints the string which hold
  * the value of unsigned binary number
  * @num: The number will be printed
  * @buffer: The string that hold the value of the number
  *
  * Return: Count of the string
  *
  */

int print_binary(long int num, char *buffer)
{
	int cnt = 0;
	char *strout = int2str(num, buffer, 2);

	while (*strout)
	{
		_putchar(*strout++);
		cnt++;
	}

	return (cnt);
}

/**
  * print_octal - A function that prints the string which hold
  * the value of unsigned octal number
  * @num: The number will be printed
  * @buffer: The string that hold the value of the number
  *
  * Return: Count of the string
  *
  */

int print_octal(unsigned int num, char *buffer)
{
	int cnt = 0;
	char *strout = int2str(num, buffer, 8);

	while (*strout)
	{
		_putchar(*strout++);
		cnt++;
	}

	return (cnt);
}
/**
  * print_uint - A function that prints the string which hold
  * the value of unsigned decimal number
  * @num: The number will be printed
  * @buffer: The string that hold the value of the number
  *
  * Return: Count of the string
  *
  */

int print_uint(unsigned int num, char *buffer)
{
	int cnt = 0;
	char *strout = int2str(num, buffer, 10);

	while (*strout)
	{
		_putchar(*strout++);
		cnt++;
	}

	return (cnt);
}

/**
  * print_hex - A function that prints the string which hold
  * the value of unsigned hexadecimal number
  * @num: The number will be printed
  * @buffer: The string that hold the value of the number
  * @flag: to indicate, it is %x or %X
  *
  * Return: Count of the string
  *
  */

int print_hex(unsigned int num, char *buffer, char flag)
{
	int cnt = 0;
	char *strout = int2str(num, buffer, 16);

	if (flag == 1)
	{
		strout = _toupper(strout);
	}

	while (*strout)
	{
		_putchar(*strout++);
		cnt++;
	}

	return (cnt);
}
