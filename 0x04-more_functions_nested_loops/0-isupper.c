#include "main.h"

/**
 * _isupper - upppercase character
 * @c: input character
 *
 * Return: 1 or 0
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
