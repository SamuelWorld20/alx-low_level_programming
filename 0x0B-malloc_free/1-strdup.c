#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: parameter that collects a string
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int a, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);

	for (a = 0; a < len; a++)
		dup[a] = str[a];
	dup[a] = '\0';

	return (dup);
}
