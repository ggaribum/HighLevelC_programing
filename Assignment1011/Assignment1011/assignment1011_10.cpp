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
	//strcmp 함수는 int값을 반환한다
	//strcmp(str,str2)
	//str<str2이면 음수반환, str==str2 0반환 , str>str2 양수반환
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
