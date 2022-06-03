#include<stdio.h>
/**
 * main - main block
 * Declaration: Program tha prints all possible combination
 * Return:0
 */
int main(void)
{
int x = 0;
while (x < 10)
{
putchar(48 + x);
if (x != 9)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
