#include "main.h"

/**
 * _isdigit - write a function that checks for a didgit (0 through 9)
 * @c: char to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
