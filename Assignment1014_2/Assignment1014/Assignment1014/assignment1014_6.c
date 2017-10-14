#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int arr[5], *pArr,*qArr;
	int rank[5],*pRank;
	int *pEnd;
	int *pEnd2;
	int rankInt=1;
	int index=0;
	int i=0;

	pEnd=arr+5;
	pEnd2=rank+5;
	pRank=rank;
	for(pArr=arr;pArr<pEnd;pArr++)
	{
		scanf("%d",pArr);
	}
	
	for(pArr=arr;pArr<pEnd;pArr++)
	{
		rankInt=1;
		for(qArr=arr;qArr<pEnd;qArr++)
		{
			if(*pArr<*qArr)
			{
				rankInt++;
			}
		}
		*(pRank+index)=rankInt;
		index++;
	}
	pArr=arr;
	for(pRank=rank;pRank<pEnd2;pRank++)
	{
		printf("%d=r%d ",*(pArr+i),*pRank);
		i++;
	}
}