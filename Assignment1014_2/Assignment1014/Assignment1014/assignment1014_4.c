#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	//�ѹ� ��� ������ ����� �����ͷ� �غ���
	int temp=0;
	int *tmp=&temp;
	int *p;
	int *pi;
	int *ptemp;
	int x[3]={0};

	scanf("%d %d %d",x,x+1,x+2);
	//�������� ����!!
	//for(p=x;p<x+ũ��;p++)
	//for(p=x;*p;p++)
	for(p=x;p<x+3;p++)
	{
		for(pi=x;pi<x+3-1;pi++)
		{
			if(*pi>*(pi+1))
			{
				*tmp=*pi;
				*(pi)=*(pi+1);
				*(pi+1)=*tmp;
			}
		}
	}
	printf("%d",*(x+1));

}