#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{

	char str[101],*pStr,*temp;
	char str2[101],*pStr2;
	int i=0;
	int j=0;
	int count=0;
	int result=0;

	//������ �����ϴ� ���ڿ� �Է¹��� �� ��� gets(ch)
	gets(str);
	scanf("%s",str2);

	for(pStr=str;pStr<str+strlen(str);pStr++)
	{
		for(pStr2=str2,temp=pStr;pStr2<str2+strlen(str2);pStr2++,temp++)
		{
			if(*temp==*pStr2)
			{
				count++;
			}
		}
		//���Ⱑ �ٽ� 
		if(count==strlen(str2))
				{
					result++;
					count=0;
					
					//���⼭ i���� �ٲ��ش�
					//str2��ũ��-1��ŭ i�� �������Ѽ� �˻�(�̹� Ƚ�� ��꿡 ���� ���� ����)

					pStr=pStr+strlen(str2)-1;
				}
		else
			count=0;
	}
	printf("%d",result);
}