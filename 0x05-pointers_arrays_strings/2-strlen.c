#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * @s: the input string 
 *
 * return: the length of a string
 *
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0' ; l++);
		return (l);
}
