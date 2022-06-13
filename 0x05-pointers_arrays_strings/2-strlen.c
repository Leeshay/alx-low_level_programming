#include "main.h"
/**
 * _strlen - return lenght of string
 * @s: character
 * Return: integer
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
