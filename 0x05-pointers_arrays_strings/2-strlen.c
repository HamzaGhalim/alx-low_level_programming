#include <stdio.h>

/**
 * _strlen - Retuns the lenght of a string.
 * @str: The to get the length of
 *
 * Return: The lenght of @str.
 */
size_t _strlen(const char *str)

{
	size_t lenght = 0;

	while (*str++)
	lenght++;
	return (lenght);
}
