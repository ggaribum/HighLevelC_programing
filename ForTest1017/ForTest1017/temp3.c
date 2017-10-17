#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int count=1;
	char str[200]={'\0'};
	int strSize=0;
	int i=0;

	gets(str);
	strSize=strlen(str);
	
	if(97<=str[0]&&str[0]<=122)
	{
		str[0]=(str[0]-32);
	}

	for(i=0;i<strSize;i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	if(str[strSize-1]!='.'){
		strcat(str,".");}
	printf("%d\n",count);
	printf("%s",str);
	

}