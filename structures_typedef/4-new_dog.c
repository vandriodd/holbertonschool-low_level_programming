#include "dog.h"

/**
 * _strdup - duplicates a string
 * @src: string source to duplicate
 * Return: the duplicate src
 */

char *_strdup(char *src)
{
	int i = 0, len = 0;
	char *strDup = NULL;

	if (!src)
		return (NULL);

	/* obtains the len of the str source */
	for (; src[len]; len++)
		;

	/* allocate mem for the str duplicate */
	strDup = malloc(sizeof(char) * len + 1);

	if (!strDup)
		return (NULL);

	/* copy string */
	for (; i < len; i++)
		strDup[i] = src[i];

	strDup[i] = '\0';
	return (strDup);
}

/**
 * new_dog - creates a new instance of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = NULL;

	/* allocate mem for the new instance */
	newDog = malloc(sizeof(dog_t));

	if (!newDog)
	{
		free(newDog);
		return (NULL);
	}

	newDog->name = _strdup(name); /* store a copy of name */

	/* in case of failure, free it */
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = _strdup(owner); /* store a copy of owner */

	/* another case of failure */
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
