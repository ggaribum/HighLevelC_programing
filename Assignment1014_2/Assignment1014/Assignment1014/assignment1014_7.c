#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int arr[50],*pArr;
	int input=0;
	int count=0 ,*pCount;
	int *arrEnd;

	pCount=&count;
	scanf("%d",&input);
	//arr+input 도 *pEnd에 저장하자

	for(pArr=arr;pArr<arr+input;pArr++)
	{
		scanf("%d",pArr);
	}
	
	for(pArr=arr;pArr<arr+input;pArr++)
	{
		if(*pArr==0)
		{
			break;
		}
		(*pCount)++;
	}
	printf("%d",*pCount);
}