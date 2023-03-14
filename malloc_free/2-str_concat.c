#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *strconc;
	int i, len1, len2;

	/* if the string is NULL, treat it as empty */
	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	/* obtains the length of the strings */
	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2]; len2++)
		;

	/* mem that I must reserve based on the length of the strings + 1 (\0) */
	strconc = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!strconc)
		return (NULL);

	/* concatenation */
	for (i = 0; i < len1; i++)
		strconc[i] = s1[i]; /* 1st step - store the 1st string */

	for (i = 0; i < len2; i++)
		strconc[i + len1] = s2[i]; /* 2nd step - add the 2nd string to the stored */

	return (strconc);
}
