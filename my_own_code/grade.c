#include<stdio.h>
/**
 * main - main block
 * Description: a program to do your grade
 * Return:0
 */
	int main(void)
	{
	int grade = 80;
		if (grade < 50)
			printf("F");
		else if ((grade >= 50) && (grade < 65))
			printf("D");
		else if ((grade >= 65) && (grade < 70))
			printf("C");
		else if ((grade >= 70) && (grade < 85))
			printf("B");
		else if (grade >= 85)
			printf("A");
		return (0);
	}
