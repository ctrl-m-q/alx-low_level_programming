#include <stdio.h>
#include <unistd.h>
/**
 * main - c program that prints exactly a line followed by a new line
 * to the standard error
 * Return: 1
 */
int main(void)
{
	fputs(
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
