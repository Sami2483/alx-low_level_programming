#include<stdio.h>
/**
 * main - main block
 * Description : program to find the facrotial of a number
 * Return:0
 */
int main(void)
{
	int x;
	int fac = 1;
	printf("enter the number:");
	scanf("%i", &x);
	while (x >= 1)
	{
		fac = fac * x;
	x--;
	}
	printf("the facrorial is : %i\n", fac);
	return (0);
}
