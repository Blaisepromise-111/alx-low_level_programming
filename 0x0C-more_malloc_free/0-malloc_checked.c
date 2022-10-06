#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *malloc_checked - asd
 *@b: asd
 *Return: asd
 **/
void *malloc_checked(unsigned int b)
{
	int *mem_space;

	mem_space = malloc(b);

	if (mem_space == NULL)
		exit(98);

	return (mem_space);
}
