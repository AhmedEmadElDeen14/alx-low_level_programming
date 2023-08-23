#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The size of the buffer
*/
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (j + i < size)
				printf("%02x", b[j + i]);
			else
				printf("  ");
			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (j + i < size)
			{
				if (isprint(b[j + i]))
					printf("%c", b[j + i]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
