#include <stdio.h>

/**
 * main - prints the alphabet in lowercase followed by a line, except q and e
 * Return: Always 0 (Success)
 */

int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e' && ch != 'q') && ch <= 'z')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
