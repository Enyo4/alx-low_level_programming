#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int destLen = 0;

	while (dest[index++])
		destLen++;
	for (index = 0; src[index]; index++)
		dest[destLen++] = src[index];

	return (dest);
}
