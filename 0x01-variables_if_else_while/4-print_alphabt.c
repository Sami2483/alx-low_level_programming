#include<stdio.h>
/**
 * main - main block
 * Description: program prints the alphabet in lowercase
 * prints all the letters except q and e
 * Return:0
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
