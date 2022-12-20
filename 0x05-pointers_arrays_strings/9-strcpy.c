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
	int len = 0;

	while (len >= 0)
	{

		*(dest + len) = *(src + len);
		if (*(src + len) == '\0')
			break;
		len++;
	}
	return (dest);
}
