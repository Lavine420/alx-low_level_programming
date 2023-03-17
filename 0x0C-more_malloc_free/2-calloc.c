#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmeb: number of members
 * @size: size
 * Return: Nothing
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmeb == 0 || size == 0)
		return (NULL);

	l = nmeb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
