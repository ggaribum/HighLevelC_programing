#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int arrsum(int *start , int *end)
{
	int result=0,*pResult;

	//이 for문이 핵심이다 !!!
	for(pResult=start;pResult<=end;pResult++)
	{
		result=result+(*pResult);
	}
	
	return result;
}
void main()
{
	int N,S,E;
	int arr[100],*pArr;

	scanf("%d %d %d",&N,&S,&E);
	
	for(pArr=arr;pArr<arr+N;pArr++)
	{
		scanf("%d",pArr);
	}
	printf("%d",arrsum(arr+S,arr+E));

}