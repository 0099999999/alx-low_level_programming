#include <stdio.h>
/**
 * main - print incomplete alphabet
 *
 * Description: using the main function
 * this program prints "Programming prints the alphabet in except q e
 * Return: 0
 */
int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
	putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
