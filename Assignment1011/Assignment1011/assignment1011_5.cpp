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
		//���� 2�������� �ٽ�
		//str[i]�� str2�� �����ŭ j�� ���ذ��鼭
		//�˻��ؼ� ��ġ�� �� ī��Ʈ�� �÷���
		//�� ī��Ʈ�� str2�� ������� ���ٸ�
		//str�ȿ� ���� �Ǿ��ִٴ� ��.
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