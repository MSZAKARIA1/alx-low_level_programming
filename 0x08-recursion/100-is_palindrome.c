#include "main.h"
/**
 * is_palindrome - returns the 1 if s is a palindrum
 *@s: string to be used
 *
 *Return: 1 if s is a palindrum, or 0 if otherwise
 */
int is_palindrome(char *s)
{	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/*
 **check - it check if a string is a palindrome
 *@s: string to be checked
 *@start: begin from
 *@end: stop at
 *@flag: flag to indicate if a string is a plindrome
 * Return: void
 */

void check(char *s, int start, int end, int flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 *_strlen_recursion - calculates the length
 *@s: string to be counted
 *
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
