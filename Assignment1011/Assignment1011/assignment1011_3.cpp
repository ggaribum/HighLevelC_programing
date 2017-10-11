#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char str[101]={};
	int i=0;
	scanf("%s",str);
	int n=strlen(str);
	for(i=0;i<n;i++)
	{
		printf("%s\n",str+i);
		str[n+i]=str[i];
	}
	
}