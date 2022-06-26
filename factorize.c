#include "rsa.h"

/**
 * factor - factorize many numbers
 * @number: var pointer factorize number
 *
 * Return: 0.
 */

int factor(unsigned long int number)
{
	int q = 2, rest = 1;
	unsigned long int p;

	/*if (number < 0)
		return (0);*/
	while (rest != 0)
	{
		rest = number % q;
		q++;
		/*printf("rest=%d, q=%d\n", rest, q);*/
	}
	q = q - 1;
	if (rest == 0)
	{
		p = number / q;
	}
	printf("%ld=%ld*%d\n", number, p, q);
	return (0);
}
