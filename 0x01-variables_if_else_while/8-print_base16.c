#include<stdio.h>
/**
 * main - main block
 * Description: program that prints all the numbers of base 16
 * Return:0
 */
int main(void)
{
int x = 0;
char c = 'a';

while (x < 10)
{
putchar(48 + x);
x++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
