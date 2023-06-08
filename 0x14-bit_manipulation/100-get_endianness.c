#include "main.h"

/**
 * get_endianness - checks big and lil endianness
 * Return: 0 for big, 1 for lil
 */
int get_endianness(void)
{
	unsigned int s = 1;
	char *c = (char *) &s;

	return (*c);
}
