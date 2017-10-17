#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char str1[42]={'\0'};
	char str2[21]={'\0'};
	int caseNum=0;
	int str1Size;
	int str2Size;
	int input;
	int i=0;
	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%d",&input);
	scanf("%d",&caseNum);

	if(caseNum==0)
	{
		str1Size=strlen(str1);
		str2Size=strlen(str2);
		strcat(str2,str1+input);
		for(i=input;i<str1Size;i++)
		{
			str1[i]='\0';
		}
		strcat(str1,str2);
		printf("%s",str1);
	}


}