#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int *a,int *b);

void main()
{
	int arr[50], *pArr;
	int input=0;
	int *pEnd;
	int i=0;
	int s_input=0,s_input2=0;
	scanf("%d",&input);
	
	pEnd=arr+input;
	for(pArr=arr;pArr<pEnd;pArr++)
	{
		scanf("%d",pArr);
	}
	scanf("%d %d",&s_input,&s_input2);
	swap(arr+s_input,arr+s_input2);

	for(i=0;i<input;i++)
	{
		printf(" %d",*(arr+i));
	}

}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

