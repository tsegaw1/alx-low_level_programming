#include "main.h"
#include <string.h> 
/**
 * _strncat -> for copying purpose
 * @dest: first param
 * @src: second param
 * @n: 3rd param
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)\
{
	strncpy(dest, src, n);
	return (dest);
}
