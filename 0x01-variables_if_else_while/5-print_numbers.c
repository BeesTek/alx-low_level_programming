#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	printf("%d", i);
	printf("\n");
	return (0);
}
