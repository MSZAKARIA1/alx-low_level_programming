#include "main.h"
/**
  * _strlen - returns the length of  a string
  * @s: string to be printed
  *Return: length
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * rev_string -This funx reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int x = 0;
	int y = (_strlen(s) - 1);
	char for_now;

	while (x < y)
	{		for_now = s[x];
		s[x] = s[y];
		s[y] = for_now;
		x++, y++;
	}
}
