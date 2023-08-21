#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
*/
void puts_half(char *str)
{
	int length = _strlen(str);
	int i;
	int start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
