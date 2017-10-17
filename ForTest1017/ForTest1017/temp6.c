#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void addArray(int *a,int *b, int *c,int size)
{
	int  i=0;
	int *temp;
	int *tempSize=c+size;
	int *revers;
	revers=b+size-1;
	for(temp=c;temp<tempSize;temp++)
	{
		*temp=*(a+i)+*(revers-i);
		i++;
	}
}
void main()
{
	int arr[20],*pArr;
	int brr[20],*pBrr;
	int result[20],*pRes;
	int input=0;
	int *pSize,*pSize2;

	scanf("%d",&input);
	pSize=arr+input;
	pSize2=brr+input;
	pRes=result;

	for(pArr=arr;pArr<pSize;pArr++)
	{
		scanf("%d",pArr);
	}
	for(pBrr=brr;pBrr<pSize2;pBrr++)
	{
		scanf("%d",pBrr);
	}
	addArray(arr,brr,pRes,input);
	printf("%d %d %d",*pRes,*(pRes+1),*(pRes+2));
}
