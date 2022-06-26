#include "rsa.h"

/**
 * factor - factorize many numbers
 * @number: var pointer factorize number
 *
 * Return: 0.
 */

int factor(unsigned long long int number)
{
	unsigned long long int q = 3;

	if (number%2 == 0)
	{
		printf("%llu=%llu*%i\n", number, number/2, 2);
		return (0);
	}
	while (q*q <= number)
	{
		if (number % q == 0)
		{
			printf("%llu=%llu*%llu\n", number, number/q, q);
			return (0);
		}
		else
			q += 2;
	}
	printf("%llu=%llu*%i\n", number, number, 1);
	return (0);
}
