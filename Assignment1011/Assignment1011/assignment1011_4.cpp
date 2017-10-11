	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	void main()
	{
		char str[101]={};
		char str2[101]={};
		int size=0;
		int size2=0;
		int i=0;
		int sizeCount=0;
		scanf("%s",str);
		scanf("%s",str2);

		for(i=0;i<101;i++)
		{
			//str[i]!='\0' NULL이아니라면
			//str을 ={}로 초기화 했기때문에
			if(str[i]!='\0')
			{
				size++;
			}
			if(str2[i]!='\0')
			{
				size2++;
			}
		}

		for(i=0;i<size;i++)
		{
			if(str[i]==str2[i])
			{
				sizeCount++;
			}
		}
		if(sizeCount==size)
		{
			sizeCount=1;
		}
		else
		{
			sizeCount=0;
		}
		printf("%d %d",size,sizeCount);

	}