#include "holberton.h"

int _strlen_recursion(char *s);

/**
 * helper - recursion helper
 * @s: string
 * @ind: 0 index
 * @len: length
 * Return: 0, if false, 1 if true
 */
int helper(char *s, int b, int e)
{

	if (b == e)
	{
		return (1);
	}

	if (s[b] != s[e])
	{
		return (0);

	}

	if (b < e + 1)
	{
		return (helper(s, b + 1, e - 1));
	}
		return (1);
}
/**
 * is_palindrome - determines if string is a palindrome
 * @s: string parameter
 * Return: 1, if yes 0, if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
	{
		return (1);
	}
	return (helper(s, 0, len - 1));
}
/**
 * _strlen_recursion - counts chars in str
 * @s: string
 * Return: 0, or count
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
