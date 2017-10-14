#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void addArray(int *a, int *b, int *c, int size)
{
	int i=0;
	int *temp;
	int *revers=b+size-1;
	for(temp=c;temp<c+size;temp++)
	{
		*temp= *(a+i) + *(revers-i);
		i++;
	}
}
void main()
{
	int arr[20],*pArr;
	int brr[20],*pBrr;
	int result[20],*pResult;
	int input=0,*pEnd,*pEnd2,*pEnd3;

	scanf("%d",&input);
	pEnd=arr+input;
	pEnd2=brr+input;
	pEnd3=result+input;
	for(pArr=arr;pArr<pEnd;pArr++)
	{
		scanf("%d",pArr);
	}
	for(pBrr=brr;pBrr<pEnd2;pBrr++)
	{
		scanf("%d",pBrr);
	}
	addArray(arr,brr,result,input);
	for(pResult=result;pResult<pEnd3;pResult++)
	{
		printf(" %d",*pResult);
	}
}