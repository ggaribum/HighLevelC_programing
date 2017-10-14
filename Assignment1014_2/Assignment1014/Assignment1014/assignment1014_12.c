#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strcopy(char a[],char b[])
{
	int i=0;
	for(i=0;i<6;i++)
	{
		*(a+i)=*(b+i);
	}
}
void main()
{
	char ch[7]={'\0'};
	char copyCh[7]={'\0'};
	scanf("%s",ch);

	strcopy(copyCh,ch);
	printf("%s",copyCh);

}