#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char cal[5]={'\0'};
	int num1=0;
	int num2=0;

	scanf("%s %d %d",cal,&num1,&num2);

	if(num1>=1000 || num2 >=1000)
	{
		return;
	}
	if(strcmp("add",cal)==0)
	{
		printf("1");
	}
		
}