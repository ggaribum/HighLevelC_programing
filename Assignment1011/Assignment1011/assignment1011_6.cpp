#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{

	char str[101];
	char str2[101];
	int i=0;
	int j=0;
	int count=0;
	int result=0;

	//공백을 포함하는 문자열 입력받을 때 사용 gets(ch)
	gets(str);
	scanf("%s",str2);

	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<strlen(str2);j++)
		{
			if(str[i+j]==str2[j])
			{
				count++;
				
			}
		}
		//여기가 핵심 
		if(count==strlen(str2))
				{
					result++;
					count=0;
					
					//여기서 i값을 바꿔준다
					//str2의크기-1만큼 i를 점프시켜서 검사(이미 횟수 계산에 사용된 문자 배제)

					i=i+strlen(str2)-1;
				}
		else
			count=0;
	}
	printf("%d",result);
}