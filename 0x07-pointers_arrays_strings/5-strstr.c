#include "main.h"
#include <stdio.h>

/**
 * _strstr - function finds the first occurrence of the substring needle in the string haystack. 
 * @haystack: source string 
 * @needle: searching string
 * Return: new string.
 */

char *_strstr(char *haystack, char *needle)
{		
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;
		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (NULL);
}
