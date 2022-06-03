#include<stdio.h>
/**
 * main - main block
 * Description: program the prints the alphabet in lowercase
 * and the in uppercase, followed by a new line
 * Return:0
 */
int main(void)
{
int x, y;
x = 'a';
y = 'A';
while (x <= 'z')
{
putchar(x);
x++;
}
while (y <= 'Z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
