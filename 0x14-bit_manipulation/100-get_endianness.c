#include "main.h"
/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 1 if the machine is little-endian, 0 if it's big-endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c ? 1 : 0);
}
