#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int arr[5],*pArr,*qArr;
	int rank[5],*pRank;
	int i=0,*pI;
	int *pSize,*pSize2;
	int rankInt;
	pSize=arr+5;
	pSize2=rank+5;
	pRank=rank;

	for(pArr=arr;pArr<pSize;pArr++)
	{
		scanf("%d",pArr);
	}
	
	for(pArr=arr;pArr<pSize;pArr++)
	{	
		rankInt=1;
		for(qArr=arr;qArr<pSize;qArr++)
		{
			if(*pArr<*qArr)
			{
				rankInt++;
			}
		}
		*pRank=rankInt;
		pRank++;
	}
	for(pRank=rank;pRank<pSize2;pRank++)
	{
		printf("%d ",*pRank);
	}
}
