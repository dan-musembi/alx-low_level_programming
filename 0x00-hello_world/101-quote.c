#include<stdio.h>
#include<unistd.h>
#define fp fputs
/**
 * main - A c program that prints a line to the standard error
 * Return: 1 (success)
 */
int main(void)
{
	fp("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
