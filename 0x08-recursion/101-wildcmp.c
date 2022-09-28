#include "main.h"

/**
*wildcmp- asd
*@s1: asd
*@s2: asd
*Return: asd
**/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '\0')
		return (0);
	else if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == '\0')
	{
		if (*s2 != '*')
			return (0);
		else
			return (wildcmp(s1, s2 + 1));
	}
	else
		return (0);
}
