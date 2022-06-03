#include<stdio.h>
/**
 * main - main block
 * Description: program that prints the alphabet in lowercase, followed by a new line
 * Return:0
 */
int main()
{
int x;
x = 'a';
while(x <= 'z')
{
        putchar(x);
        x++;
}
putchar('\n');
return 0;
}
