#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copy up to n characters from src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the null terminator */
	dest[i] = '\0';

	return (dest);
}

