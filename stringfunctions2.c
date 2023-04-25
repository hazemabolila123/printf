#include "main.h"

/**
 * _toupper- A function that converts lowercase to uppercase
 * @str: String to be converted
 *
 * Return: Pointer to the first char of the string
 *
 */
char *_toupper(char *str)
{
	int i, cnt = 0;

	cnt = _strlen(str);
	for (i = 0; i < cnt; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}

/**
 * rot13 - A function that that maps a string.
 * @str: Function parameter
 *
 * Return: A pointer to the mapped string
 *
 */
char *rot13(char *str)
{
	int i, j;
	char *ptr = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *map = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ptr[j] != '\0'; j++)
		{
			if (str[i] == ptr[j])
			{
				str[i] = map[j];
				break;
			}
		}
	}

	return (str);

}
