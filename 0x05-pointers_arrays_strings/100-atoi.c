#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: input
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int con = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + con) != '\0')
	{
		if (size > 0 && (*(s + con) < '0' || *(s + con) > '9'))
		       break;
		if ((*(s + con) >= '0') && (*(s + con) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		con++;
	}

	for (i = con - size; i < con; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}	
