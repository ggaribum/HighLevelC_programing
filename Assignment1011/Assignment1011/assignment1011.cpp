#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ҹ��ڸ� ���.
int main()
{
	int i=0;
	char ch[21];
	scanf("%s",ch);
	//gets(ch);
	for(i=0;i<strlen(ch);i++)
	{
		if('a'<=ch[i]&&ch[i]<='z')
		{
			printf("%c",ch[i]);
		}
	}
	return 0;
}