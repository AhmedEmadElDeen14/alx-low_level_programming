#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char *str = "_putchar\n";

	while (*str)
	{
		write(1, str, 1);
		str++;
	}

	return (0);
}
