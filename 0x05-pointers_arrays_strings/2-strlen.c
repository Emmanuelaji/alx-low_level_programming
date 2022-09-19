#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: string to find length of
 * return: lenght of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
