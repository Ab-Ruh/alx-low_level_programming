#include "main.h"
/**
 * _strlen - Computes the length of a string
 * @s: Pointer to the first character of the string
 *
 * Return: The length of the string (not including null byte)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
