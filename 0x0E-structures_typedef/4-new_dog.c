#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies strings from src to dest
 * @src: String to copy
 * @dest: pointer to the which we copy the string
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (*src)
	{
		len++;
		src++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - Gets the length of a given string
 * @s: pointer to a string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
