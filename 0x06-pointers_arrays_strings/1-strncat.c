#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

    /* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
	dest_len++;

    /* Append the source string to the destination string */
	while (src[i] != '\0')
	{
	dest[dest_len] = src[i];
	dest_len++;
	i++;
	}

    /* Add the terminating null byte to the concatenated string */
	dest[dest_len] = '\0';
	return (dest);
}
