#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//�迭�� �ƴ� �����͸����� Ǯ���.
void main()
{
	int input, i;
	int *p=NULL;
	
	//�迭 ����(input)�� �Է�
	scanf("%d", &input);
	
	//p�� �����Ҵ�
	p = (int*)malloc(input*sizeof(int));

	for(i=0;i<input;i++)
	{
		scanf("%d", p+i);	//p�迭�� �Է�
	}
	for(i=0;i<input;i++)
	{
		//ó�� �ε����� �ٷ� ���� �ε����� ��
		if (i==0 && p[i]>p[i+1]) printf("%d %d\n",i,p[i]);
		//input-1 �ε����� �ٷ� ���� ��
		else if (i==input-1 && p[i-1]<p[i]) printf("%d %d\n", i, p[i]);	
		//�߰� �ε����� �翷�� ��
		else if (p[i-1]<p[i] && p[i]>p[i+1]) printf("%d %d\n", i, p[i]);
		
	}
	free(p);//�޸� �ݳ�
	return ;
}
