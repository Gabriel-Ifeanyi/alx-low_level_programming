#include "main.h"

/**
 * _memcpy - would write a function that copies memory area
 * @dest: is the destination memory
 * @src: is the source memory
 * @n: is the number of bytes to be copied
 * Return: string copied from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
