#include <stdio.h>
#include <unstid.h>
/**
 * main - Entry point
 * Descrition: prints char below 10
 * Return:Always 0 (success)
 */
int main(void)
{
	int a;

	for(a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}