#include <stdio.h>

/**
 * main -  program that prints fizz buzz on given condition
 * Return: 0 (Success)
*/

int main(void)
{
	int digit;

	for (digit = 0; digit <= 100; digit++)
	{
		if (digit % 3 == 0)
			printf(" Fizz");

		else if (digit % 5 == 0)
			printf(" Buzz");

		else if (digit % 5 == 0 && digit % 3 == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", digit);

		if (digit != 100)
			printf(" ");
		else
			printf(" ");
	}

	return (0);
}
