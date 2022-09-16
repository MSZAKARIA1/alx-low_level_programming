#include "main.h"
/**
 * _isupper -chech if character is upper
 * @c: character
 * Return: 1 success 0 fail
 */
int _isupper(int c)
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
