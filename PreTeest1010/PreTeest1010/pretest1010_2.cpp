#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int i=0,j;
	int flag=0;
	int size=1;//size�� 1����!!!
	char ch[30];
	char newCh[30]=""; //�ʱ�ȭ �ʼ�!!!
	scanf("%s",ch);

	newCh[0]=ch[0]; //�̰� �ٽ� �� �ϳ�

	for(i=1;i<strlen(ch);i++) //���⼭�� i=1���� ����!!
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