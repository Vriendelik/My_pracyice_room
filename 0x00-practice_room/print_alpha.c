#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet >= 'a' && alphabet <= 'z')
	{

		printf("%c\n", alphabet);
	alphabet++;
	}

	return (0);
}
