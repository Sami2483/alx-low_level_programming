#include<stdio.h>
/**
 * main - main block
 * Description: prime numbers with in a range
 * Return:0
 */
int main(void)
{
	int x, y;
		printf("enter the starting number :");
		scanf("%i", &x);
		printf("enter the ending number :");
		scanf("%i", &y);
		while (x < y)
		{
			int z = 2;
			while (z < x)
			{
				if( x % z != 0)
				{
					printf("the number = %i\n", x);
				}
				z++;
			}
			x++;
		}
		return (0);
}
