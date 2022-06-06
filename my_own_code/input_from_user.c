#include<stdio.h>
/**
 * main - main block
 * Description: C program to accept input from user
 * Return:0
 */
int main(void)
	{
		int testInteger;

		printf("Enter an integer: ");
		scanf("%i", &testInteger);
		printf("number = %i\n", testInteger);
		return (0);
	}
