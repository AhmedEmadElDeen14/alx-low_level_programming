#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @num: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the number
*/
long largest_prime_factor(long num)
{
	long largest_factor = -1;
	int i;

	while (num % 2 == 0)
	{
		largest_factor = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}

	if (num > 2)
		largest_factor = num;

	return (largest_factor);
}

int main(void)
{
	long number = 612852475143;
	long largest_prime = largest_prime_factor(number);

	printf("%ld\n", largest_prime);

	return (0);
}
