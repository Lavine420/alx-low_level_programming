#include <stdio.h>

/**
 * main - Entry point
 * description - prints the alphabet in lowercase except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
