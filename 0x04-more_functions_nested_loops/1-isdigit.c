#include "main.h"
/**
 *_isdigit: it checks for a digit form 0 - 1
 *
 *@c: character
 *
 * Return: 1 success 0 fail
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
