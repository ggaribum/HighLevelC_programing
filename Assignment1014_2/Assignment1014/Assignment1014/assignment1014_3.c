#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char ch[20];
	int i=0;
	int j=0;
	scanf("%s",ch);

	for(i=0;i<20;i++)
	{
		if(*(ch+i)=='#')
		{
			for(j=i-1;j>=0;j--)
			{
				printf("%c",*(ch+j));
			}
			break;
		}
	}
}