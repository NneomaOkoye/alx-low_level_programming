#include "main.h"

/**
 * _strlen - return the lenght of a string
 * owned by Nneoma
 * @s: char to check
 * Description: this will return the leght of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
