#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *array_range - asd
 *@min: asd
 *@max: asd
 *Return: asd
 **/
int *array_range(int min, int max)
{
	int *array;
	int size = 0, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = malloc(sizeof(*array) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++, min++)
		*(array + i) = min;

	return (array);
}
