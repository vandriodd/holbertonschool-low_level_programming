#include <unistd.h>

/**
 * main - prints a quote & standard error
 *
 * Return: 1 if success
 */
int main(void)
{
	char str[] = "and that piece of art is usesful\" - Dira Jiroar, 2015-10-19\n";

		write(2, str, 59);
		return (1);
}
