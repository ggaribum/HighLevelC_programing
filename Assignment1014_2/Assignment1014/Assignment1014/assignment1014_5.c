#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	//������ �������� Ǯ���
	char ch[10] , *pch , *pch2;
	char answer,*pAnswer ,*chEnd;
	int count=0 ,*pCount;
	int maxCount=0,*pMaxCount;
	//�����ʹ� �� ���� ��ų��.
	pCount=&count;
	pMaxCount=&maxCount;
	pAnswer=&answer;

	//�ش� �迭�� ������ �ּҸ� ����
	chEnd=ch+10;
	
	//�Է�
	for(pch=ch;pch<chEnd;pch++)
	{
		scanf("%c",pch);
	}
	//�ߺ��Ǵ� ���� �˻�
	//�����غ� �κ��� ������ ������ ī��Ʈ ���� ���͵�
	//maxCount<count �̸� ������Ʈ �� �Ŵϱ� �������.
	for(pch=ch;pch<chEnd;pch++)
	{
		*pCount=0;
		for(pch2=ch;pch2<chEnd;pch2++)
		{
			if(*pch==*pch2)
			{
				(*pCount)++;
			}
		}
		if(*pMaxCount<*pCount)
		{
			*pMaxCount=*pCount;
			*pAnswer=*pch;
		}
	}
	printf("%c %d",*pAnswer,*pMaxCount);
}