#include "main.h"

/**
 * _strncpy - copies at most an inputted number
 * @dest: destination string
 * @src: source string
 * @n: Mximum number of bytes to be copied
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
