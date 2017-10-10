#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int i=0,j;
	int flag=0;
	int size=1;//size는 1부터!!!
	char ch[30];
	char newCh[30]=""; //초기화 필수!!!
	scanf("%s",ch);

	newCh[0]=ch[0]; //이게 핵심 중 하나

	for(i=1;i<strlen(ch);i++) //여기서도 i=1부터 시작!!
	{
		for(j=0;j<strlen(newCh);j++)
		{
			if(newCh[j]==ch[i])
			{
				flag=1;
				break;
			}

		}
		if(flag==0)
		{
			newCh[size++]=ch[i];
		}
		flag=0;
	}
	printf("%s",newCh);
}