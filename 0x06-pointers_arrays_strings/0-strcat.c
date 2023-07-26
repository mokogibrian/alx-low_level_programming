#include "main.h"

/* main - concatenates two strings
*
* *dest- string pointer
* *src- string pointer
* Return: Dest
*/

char* _strcat(char* dest, char* src) {
	char* ptr = dest; /* Store the starting address of dest */

/* Move the pointer to the end of the dest string */
	while (*ptr != '\0') {
	ptr++;
	}

/* Append the characters of src to dest */
	while (*src != '\0') {
	*ptr = *src;
	ptr++;
	src++;
	}

	*ptr = '\0'; /* Add the terminating null byte to complete the concatenated string */
	return dest;
}