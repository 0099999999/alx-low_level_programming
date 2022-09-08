#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "programming is like building a multilingual puzzel
 * Return: 1
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Kropar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}
