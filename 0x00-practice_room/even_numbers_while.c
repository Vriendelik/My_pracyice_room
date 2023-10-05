#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	/* program that prints even numbers from 1 to 20 using while loop*/
	int x = 1;

	while (x <= 20)
	{
		if (x % 2 == 0)
		{
			printf("%d \n", x);
		}
		x++;
	}


	return (0);
}
