#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result string
 *         or 0 if the result cannot be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int i, j, k, carry = 0;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;
	r[k] = '\0';

	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			carry += n1[i--] - '0';
		if (j >= 0)
			carry += n2[j--] - '0';

		r[--k] = (carry % 10) + '0';
		carry /= 10;
	}

	if (carry)
	{
		if (k == 0)
			return (0);
		r[--k] = carry + '0';
	}
	return (0);
}
