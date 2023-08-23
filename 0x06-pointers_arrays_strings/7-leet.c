#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
	int i, j;
	char leet_letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char leet_numbers[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == leet_letters[j] || str[i] == leet_letters[j] + 32)
				str[i] = leet_numbers[j];
			j++;
		}
		i++;
	}
	return (str);
}
