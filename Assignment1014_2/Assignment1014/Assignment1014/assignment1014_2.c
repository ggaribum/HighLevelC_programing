#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(int *a, int *b, int *c);
void output(int *a, int *b, int *c);

void main()
{
	int a,b,c;
	input(&a,&b,&c);
	output(&a,&b,&c);
}
void input(int *a, int *b, int *c)
{
	scanf("%d %d %d",a,b,c);
}
void output(int *a, int *b, int *c)
{
	printf("%d %d %d",*a,*b,*c);
}
