#include<stdio.h>
/**
 * main - main block
 * Descirption: program display n terms of natural numbers
 * Return:0
 */
int main(void)
{
	int x;
	int y = 1;
	int sum = 0;

	printf("Enter the number : ");
	scanf("%i", &x);
	while (y <= x)
	{
		sum = sum + y;
		y++;
	}
	printf("The sum of between 1 and %i is :%i \n", x, sum);
	return (0);
}
