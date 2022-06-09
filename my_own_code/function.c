#include<stdio.h>
#include<stdlib.h>
int _abs(int);
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r=_abs(-4);
	printf("%d\n", r);
	r=_abs(0);
	printf("%d\n", r);
	return (0);
}
int _abs(int y)
{
	int z;
 z=y*y;
 y=z/y;
}
