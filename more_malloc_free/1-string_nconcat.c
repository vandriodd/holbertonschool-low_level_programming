#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of elements allowed
 * Return: pointer to a newly space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *stringConc = NULL;

	/* if NULL is passed, treat it as an empty string */
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	/* obtains the length of the strs */
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	/* mem alloc for s1, n chars for s2 & \0 */
	stringConc = malloc(sizeof(char) * len1 + n + 1);

	if (!stringConc)
		return (NULL);

	for (i = 0; i < len1; i++)
		stringConc[i] = s1[i]; /* store the 1st string */
	for (i = 0; i < n; i++)
		stringConc[i + len1] = s2[i]; /* add n bytes of the 2nd */

	return (stringConc);
}
