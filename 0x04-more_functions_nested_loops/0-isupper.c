#include "main.h"
/**
 * isupper - checksif uppercase
 * @c: character to check
 *
 * Return: return 1 if uppercase or 0 otherwise
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
