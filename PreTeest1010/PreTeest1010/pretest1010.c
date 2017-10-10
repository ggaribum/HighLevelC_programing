#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int add_to_k(int *a,int *b);
void main()
{
	int i=0;
	int input;
	int d[100];
	int res=0;
	scanf("%d",&input);
	for(i=0;i<input;i++)
	{
		scanf("%d",&d[i]);
	}
	for(i=0;i<input;i++)
	{
		res=res+add_to_k(d,d+i);
	}
	printf("%d",res);

}
int add_to_k(int *a,int *b)
{
	int i,answer=0;
	int *s;
	int *result=&answer;
	for(s=a;s<=b;s++)
	{
		*result=*result+*s;
	}
	return *result;
}