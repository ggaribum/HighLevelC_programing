#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char str[51];
	char str2[51];
	int caseNum=0;
	scanf("%s",str);
	scanf("%s",str2);
	caseNum=strcmp(str,str2);

	if(caseNum<0){printf("%s",strcat(str2,str));}
	else if(caseNum>0){printf("%s",strcat(str,str2));}
	else if(caseNum==0){printf("%s",strcat(str,str2));}

}