#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	//str�� ũ�Ⱑ 21�� �ƴ϶�
	//ũ�Ⱑ 42�� �Ǿ����.
	//�������� �� ���� �Է±��̰� �ִ� 20����
	//�ִ� ũ�Ⱑ 20�̶� ���� �ƴϴ�!!
	char str[42]={};
	char str2[21]={};
	int i=0;
	int j=0;
	int input=0;
	int caseNum=0;
	int strSize=0;
	int str2Size=0;

	scanf("%s",str);
	scanf("%s",str2);
	scanf("%d",&input);
	scanf("%d",&caseNum);

	strSize=strlen(str);
	str2Size=strlen(str2);

	//���� str�� input���� str�� size��ŭ�� ����
	//str2�� �Ű��ְ�
	//str �� �� �κк��� ������ '\0'�� �ʱ�ȭ ��Ű��
	//strcat�� ���ؼ� str�ڿ� str2�� �ٿ��ش�.
	if(caseNum==1)
	{
		for(i=input;i<strSize;i++)
		{
			str2[str2Size+j]=str[i];
			j++;
		}
		for(i=input;i<strSize;i++)
		{
			str[i]='\0';
		}
		j=str2Size-1;
		for(i=input;i<input+str2Size;i++)
		{
			str[i]=str2[j];
			j--;
		}
		strcat(str,str2+str2Size);
		printf(str);

	}
	else
	{	j=0;
		for(i=input;i<strSize;i++)
		{
			str2[str2Size+j]=str[i];
			j++;
		}
	
	for(i=input;i<strSize;i++)
	{
		str[i]='\0';
	}
	strcat(str,str2);
	printf("%s",str);
	}
}