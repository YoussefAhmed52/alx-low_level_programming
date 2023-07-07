#include "main.h"
#include <stdio.h>
/**
 * Description: *_strstr - function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: string
 * @needle: substring
 * Return : NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	char *p1 = haystack;

	while (*p1 != '\0')
	{
	char *p1_start = p1;
	char *p2 = needle;

	while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
	{
		p1++;
		p2++;
	}

	if (*p2 == '\0')
	{
		return (p1_start);
	}

	p1 = p1_start + 1;
	}

	return (NULL);
}
