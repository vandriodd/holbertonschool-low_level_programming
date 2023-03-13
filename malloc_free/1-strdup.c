#include "main.h"

/**
 * _strdup - sets a pointer to a newly allocated space mem (str dup)
 * @str: pointer to the string input
 * Return: pointer to a str's duplicated string or NULL
 */

char *_strdup(char *str)
{
	unsigned int i, length;
	char *stringdup;

	/* if isn't a valid size to allocate mem */
	if (!str)
		return (NULL);

	/* obtains the lenght of the str */
	for (length = 0; str[length]; length++)
		;

	/* +1 to add the '\0' */
	stringdup = malloc(sizeof(char) * length + 1);

	if (!stringdup)
		return (NULL);

	for (i = 0; i < length; i++)
		stringdup[i] = str[i];

	return (stringdup);
}
