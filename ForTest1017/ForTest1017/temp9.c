#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char c[101]={'\0'};
	int i=0,j=0;
	scanf("%s",c);

	for(i=0,j=1;i<strlen(c);i++,j++)
	{
		if(i==strlen(c)-j){printf("%c",c[i]);break;}
		if(i>(strlen(c)-j)){break;}
		printf("%c",c[i]);
		printf("%c",c[strlen(c)-j]);

	}
}