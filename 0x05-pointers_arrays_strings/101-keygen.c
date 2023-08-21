#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Entry point of the program
 *
 * Return: Always 0
*/
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i, ascii_sum, random_char;

	srand(time(0));

	ascii_sum = 0;
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		random_char = rand() % 62;
		if (random_char < 26)
			password[i] = 'A' + random_char;
		else if (random_char < 52)
			password[i] = 'a' + (random_char - 26);
		else
			password[i] = '0' + (random_char - 52);

		ascii_sum += password[i];
	}
	password[PASSWORD_LENGTH] = '\0';

	if (ascii_sum != 0x5e7c)
		password[0] += (0x5e7c - ascii_sum);

	printf("%s\n", password);

	return (0);
}
