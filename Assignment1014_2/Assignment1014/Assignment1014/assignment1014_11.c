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
	//pArr�� �׳� for�� �����θ� ����.
	//������ �迭ǥ����� �� ����Ǵϱ�. arr ����
	//���� �ٽ� pArr=arr; �� �ʿ䰡����.
	//pArr=arr;
	printf("%d",findeven(arr,input));

}