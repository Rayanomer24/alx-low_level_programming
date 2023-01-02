#include "main.h"
/**
 * _strstr - prints the consecutive caracters of s1 that are in s2. 
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
	return (0);
}
