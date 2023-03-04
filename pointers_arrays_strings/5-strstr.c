#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string from where substring will be searched
 * @needle: substring to be searched
 * Return: pointer to string at starting sub or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, t;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] - 1; i++) /* -1 avoid segmentation fault */
	{
		if (haystack[i] == needle[0])
		{
			for (t = 0; needle[t] - 1; t++)
			{
				if (haystack[i + t] != needle[t])
					break;
			}
			
			if (needle[t] == '\0')
				return (haystack + i);
		}
	}

	return ('\0');
}
