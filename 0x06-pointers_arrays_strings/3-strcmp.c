#include "holberton.h"

int _strcmp(char *s1, char *s2)
{

	if (*s1 < *s2)
	{
		return(-15);
	}
	if (*s2 < *s1)
	{
		return(15);
	}
	if (*s1 == *s1)
	{
		return(0);
	}

}
