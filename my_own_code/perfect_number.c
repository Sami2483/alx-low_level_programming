#include<stdio.h>
/**
 * main - main block
 * Description - a program to find a perfect number b/n 0 and 500
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int u = 1;
	int sum = 0;
		while (i <= 500)
		{
			while (u <= 500)
			{
				if (u < i)
				{
					if (i % u == 0)
						sum = sum + u;
				}
				u++;
			}
			if (sum == i)
			{
				printf("%i\n", i);
			}
			i++;
			u = 1;
			sum = 0;
		}
	return (0);
}
