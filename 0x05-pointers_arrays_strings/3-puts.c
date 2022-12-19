#include "main.h"
/**
 * _puts - function that prints a string
 * @str: the parametr of _puts function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
