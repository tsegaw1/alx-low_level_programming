#include "main.h"
/**
 * _strcat - conctenates two strings
 *
 * @dest:destination
 * @src:source
 *
 * Return:char
 *
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
