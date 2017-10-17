#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char ch[21],*pCh,*qCh;
	scanf("%s",ch);
	for(pCh=ch;pCh<ch+20;pCh++)
	{
		if(*pCh=='#')
		{
			for(qCh=pCh-1;qCh>=ch;qCh--)
			{
				printf("%c",*qCh);
			}
		}
	}
}