#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	/* program that prints even numbers from 0 to 20*/
	
	int x;

	for (x = 1; x <= 20; x++)
	{
		if (x % 2 == 0)
		{
			printf("%d\n", x);
		}
	}

	return (0);
}
