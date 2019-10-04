#include "holberton.h"

/**
 * cap_string - capitalize every word in string
 * @scnt: counter
 * @s: string
 * Return: s
 */

char *cap_string(char *s)
{

	int scnt = 0;
	int cnt;
	char *sep = ",\" ;.!?(){}\n\t";

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 'a' - 'A';
	}

	while (s[scnt] != '\0')
	{
		cnt = 0;

		while (sep[cnt] != '\0')
		{
			if (s[scnt - 1] == sep[cnt] && (s[scnt] >= 'a' && s[scnt] <= 'z'))
		       	{
				s[scnt] -= 'a' - 'A';
			}
			cnt++;
		}
		scnt++;
	}
	return (s);
}
