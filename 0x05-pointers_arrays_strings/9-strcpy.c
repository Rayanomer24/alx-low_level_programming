#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: destinaiton
 * @src: source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int len = dest;

	while (*src != '\0')
	{

		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (len);
}
