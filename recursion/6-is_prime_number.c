#include "main.h"

/**
 * supp - support function to evalues if a number is prime
 * @n: number to be checked
 * @i: factor
 * Return: 1 if n is prime, 0 if not
 */

int supp(int n, int i)
{
	if (n == i) /* prime number */
		return (1);
	else if (!(n % i)) /* composite number */
		return (0);
	else
		return (supp(n, i + 1));
}

/**
 * is_prime_number - evalues if n is a prime number
 * @n: number to be checked
 * Return: boolean
 */

int is_prime_number(int n)
{
	if (n < 2) /* composite number */
		return (0);
	else
		return (supp(n, 2)); /* prime number */
}
