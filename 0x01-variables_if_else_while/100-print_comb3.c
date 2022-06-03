#include<stdio.h>
/**
 * main - main block
 * Description: program that prints all possible different combination
 * Return:0
 */
int main(void)
{
int c;
int x = 0;
while (x < 10)
{
c = 0;
while (c < 10)
{
if (x != c && x < c)
{
putchar('0' + x);
putchar('0' + c);
if (c + x != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
x++;
}
putchar('\n');
return (0);
}
