#include<stdio.h>
/**
 * main - main block
 * Desctiption: a program to check if the number is prime
 * Return:0
 */
int main(void)
{
	int x;
	printf("enter the number to know if it is prime : ");
	scanf("%i" ,&x);
	int y = 2;
	while (y < x)
	{
		if (x % y == 0)
		{
			printf("the number is not prime\n");
			break;
		}else
		{
			printf("the number is prime\n");
			break;
		}
		y++;
	}
	return (0);
}
