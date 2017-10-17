#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void del(char * d)
{
	int i=0;
	int j=0;

	for(i=0;i<strlen(d);i++)
	{
		if(d[i]==' ')
		{
			for(j=i;j<strlen(d);j++)
			{
				d[j]=d[j+1];
			}
			i--;
		}
	}
}
void main()
{
	char str[101]={'\0'};
	gets(str);
	del(str);
	printf("%s",str);

}