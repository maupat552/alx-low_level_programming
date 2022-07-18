#include "main.h"

/**
 *_memset  -> this memory set function
 *@s: string
 *@b: The character to fill the memory area with.
 *@n: an integer
 *
 *Return: A string.
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
