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

	//������ �����ϴ� ���ڿ� �Է¹��� �� ��� gets(ch)
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
		//���Ⱑ �ٽ� 
		if(count==strlen(str2))
				{
					result++;
					count=0;
					
					//���⼭ i���� �ٲ��ش�
					//str2��ũ��-1��ŭ i�� �������Ѽ� �˻�(�̹� Ƚ�� ��꿡 ���� ���� ����)

					i=i+strlen(str2)-1;
				}
		else
			count=0;
	}
	printf("%d",result);
}