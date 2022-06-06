#include<stdio.h>
/**
 * main - main block
 * Description: a program to add 1 upto 10
 * Return: 0
 */
int main(void)
	{
		printf("using while loop \n");
		int x = 1;
		int y;
		int sum1 = 0;
		int sum2 = 0;

		while (x <= 10)
		{
			sum1 = sum1 + x;
			x++;
		}
		printf("addition = %i \n", sum1);
		printf("using for loop \n");
		for (y = 1; y <= 10; y++)
		{
			sum2 = sum2 + y;
		}
		printf("addition using for loop= %i \n", sum2);
		return (0);
	}
