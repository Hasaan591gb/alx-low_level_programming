#include <stdio.h>

/**
 * main - Entry point for the program
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int mod1, mod2;

		mod1 = i % 3;
		mod2 = i % 5;
		if (!mod1 && mod2)
			printf("Fizz ");
		else if (mod1 && !mod2)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else if (!mod1 && !mod2)
			printf("FizzBuzz ");
		else
				printf("%d ", i);
	}
	printf("\n");
}
