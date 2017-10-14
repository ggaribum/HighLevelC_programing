#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int findeven(int a[],int size)
{
	int *temp;
	int count=0,*pCount;
	pCount=&count;
	
	for(temp=a;temp<a+size;temp++)
	{
		if((*temp)%2==0)
		{
			(*pCount)++;
		}
	}
	return *pCount;
}
void main()
{
	int arr[100],*pArr;
	int input=0,*pEnd;
	int i=0;
	scanf("%d",&input);
	pEnd=arr+input;
	for(pArr=arr;pArr<pEnd;pArr++)
	{
		scanf("%d",pArr);
	}
	//pArr은 그냥 for문 용으로만 쓰자.
	//어차피 배열표기법만 안 쓰면되니깐. arr 쓰자
	//괜히 다시 pArr=arr; 할 필요가없음.
	//pArr=arr;
	printf("%d",findeven(arr,input));

}