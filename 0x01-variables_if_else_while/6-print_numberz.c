#include<stdio.h>
/**
 * main - main block
 * Description: program that prints all single digit numbers
 * of base 10 starting form 0
 * we can only use putchar instead of printf,puts
 * Return:0
 */
int main(void)
{
int x = 0;
while (x < 10)
{
putchar(48 + x);
x++;
}
putchar('\n');
return (0);

}
