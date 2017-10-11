#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char str1[81];
	char str2[11];
	int size=0;
	int size2=0;
	int i=0;
	int j=0;
	int count=0;
	int result=0;
	scanf("%s",str1);
	scanf("%s",str2);
	size=strlen(str1);
	size2=strlen(str2);
	for(i=0;i<size;i++)
	{
		//여기 2중포문이 핵심
		//str[i]를 str2의 사이즈만큼 j를 더해가면서
		//검사해서 일치할 때 카운트를 늘려줌
		//그 카운트가 str2의 사이즈랑 같다면
		//str안에 포함 되어있다는 뜻.
		for(j=0;j<size2;j++)
		{
			if(str1[i+j]==str2[j])
			{
				count++;
			}
		}
		if(count==size2)
		{
			result=1;
			break;
		}
		else
			count=0;
	}
	printf("%d %d",size,result);
}