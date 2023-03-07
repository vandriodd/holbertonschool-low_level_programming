#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: str
 * Return: int (str)
 */

int _atoi(char *s)
{
	int i; /* iterator */
	int num = 0;
	int sig = -1; /* sign */

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		{
			sig *= -1;
		}

		if ((s[i] >= 48) && (s[i] <= 57))
		{
			if (num < 0)
			{
				num = (num * 10) - (s[i] - '0');
			}
			else
			{
				num = (s[i] - '0') * -1;
			}
			if ((s[i + 1] < 48) || (s[i + 1] > 57))
			{
				break;
			}
		}
	}

	if (sig < 0)
		num *= -1;

	return (num);
}
