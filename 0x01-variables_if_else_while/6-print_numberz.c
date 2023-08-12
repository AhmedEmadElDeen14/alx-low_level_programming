#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0
 * using the putchar function and avoiding the use of char variables
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}

	putchar('\n');

	return (0);
}
