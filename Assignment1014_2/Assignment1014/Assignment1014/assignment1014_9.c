#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sum_(int* pSum, int* pSub,int a,int b);

void main()
{
	int i=0,j=0,sum=0,sub=0;
	scanf("%d %d",&i,&j);
	sum_(&sum,&sub,i,j);
	printf("%d %d",sum,sub);
}
void sum_(int* pSum, int* pSub,int a,int b)
{
	*pSum= a + b;
	*pSub= a - b;
}