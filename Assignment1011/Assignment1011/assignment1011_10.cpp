#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char str[100];
	char str2[100];
	int res=0;

	scanf("%s",str);
	scanf("%s",str2);
	//strcmp �Լ��� int���� ��ȯ�Ѵ�
	//strcmp(str,str2)
	//str<str2�̸� ������ȯ, str==str2 0��ȯ , str>str2 �����ȯ
	res=strcmp(str,str2);
	if(res<0)
	{
		strcat(str2,str);
		printf("%s",str2);
	}
	else{
		strcat(str,str2);
		printf("%s",str);}

}
