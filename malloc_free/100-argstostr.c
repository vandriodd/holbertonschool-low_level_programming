#include "main.h"

/**
 * argstostr - concatenates all program arguments
 * @ac: argument count (argc)
 * @av: argument vector (argv)
 * Return: pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, n;
	int len = 0, add = 0;
	char *newStr;

	if (ac == 0 || !av)
		return (NULL);

	/* obtains the len to alloc mem */
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}

	if (len < 0) /* avoid fishy value */
		return (NULL);
	else
		len += (ac + 1); /* add bytes to be occupied by \n and \0 */

	newStr = malloc(sizeof(char) * len); /* mem alloc for the str */

	/* case of failure */
	if (!newStr)
		return (NULL);

	/* add args to the newly str */
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			newStr[add++] = av[i][n];
		}

		newStr[add++] = '\n'; /* each arg is followed by \n*/
	}

	newStr[add] = '\0';
	return (newStr);
}
