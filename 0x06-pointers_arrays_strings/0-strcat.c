#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source string
 * Return: string concatenated
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest; /* Store the starting address of dest */

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}

	*ptr = '\0';
	return (dest);
}
