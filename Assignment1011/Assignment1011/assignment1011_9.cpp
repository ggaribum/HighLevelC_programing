#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	//str은 크기가 21이 아니라
	//크기가 42가 되어야함.
	//문제에서 잘 보면 입력길이가 최대 20이지
	//최대 크기가 20이란 말은 아니다!!
	char str[42]={};
	char str2[21]={};
	int i=0;
	int j=0;
	int input=0;
	int caseNum=0;
	int strSize=0;
	int str2Size=0;

	scanf("%s",str);
	scanf("%s",str2);
	scanf("%d",&input);
	scanf("%d",&caseNum);

	strSize=strlen(str);
	str2Size=strlen(str2);

	//먼저 str을 input부터 str의 size만큼의 값을
	//str2에 옮겨주고
	//str 의 그 부분부터 끝까지 '\0'로 초기화 시키고
	//strcat을 통해서 str뒤에 str2를 붙여준다.
	if(caseNum==1)
	{
		for(i=input;i<strSize;i++)
		{
			str2[str2Size+j]=str[i];
			j++;
		}
		for(i=input;i<strSize;i++)
		{
			str[i]='\0';
		}
		j=str2Size-1;
		for(i=input;i<input+str2Size;i++)
		{
			str[i]=str2[j];
			j--;
		}
		strcat(str,str2+str2Size);
		printf(str);

	}
	else
	{	j=0;
		for(i=input;i<strSize;i++)
		{
			str2[str2Size+j]=str[i];
			j++;
		}
	
	for(i=input;i<strSize;i++)
	{
		str[i]='\0';
	}
	strcat(str,str2);
	printf("%s",str);
	}
}