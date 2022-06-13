#include "main.h"
/**
 * _strlen - return lenght of string
 * @s: character
 * Return: integer
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
