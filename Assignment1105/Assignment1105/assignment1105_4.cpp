#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct st{
	char *str;
	int cnt;
};
void main()
{
	struct st tmp;	//�ӽ� ����ü����
	struct st *p = NULL;//�Է¹��� ����ü ������

	char *q = NULL;//���ڿ� ������ ����
	int n=0;
	int i=0;
	int j=0;

	//�����Է�
	scanf("%d", &n);

	//����ü ũ�⸸ŭ n�� �����Ҵ�
	p = (struct st* )malloc(n*sizeof(struct st));
	//�Է¹��� ���ڿ� �����Ҵ�
	q = (char *)malloc(101*sizeof(char));

	//i�� n����
	for(i=0;i<n;i++){
		//������� ���ڿ� �Է�
		scanf("%s", q);

		//�Է¹��� q�� p�� i��° ������ str���� �����Ҵ�
		(p+i)->str = (char *)malloc((strlen(q)+1)*sizeof(char));
		//�Է¹��� q�� p�� i��° ������ str�� ���ڿ� ����
		strcpy((p+i)->str,q);

		(p+i)->cnt = 0;//������ ���� 0�Ƿ� �ʱ�ȭ

		for(j=0;j<strlen((p+i)->str);j++)
		{	
			//������ �ƴ϶��
			if ((p+i)->str[j]!='A' && (p+i)->str[j]!='E' && (p+i)->str[j]!='I' 
				&& (p+i)->str[j]!='O' && (p+i)->str[j]!='U' 
				&& (p+i)->str[j]!='a' && (p+i)->str[j]!='e' && (p+i)->str[j]!='i'
				&& (p+i)->str[j]!='o'&& (p+i)->str[j]!='u')
			{
				(p+i)->cnt++;//���ڰ� ������ ��� ī��Ʈ ����

			}
		}
	}

	//�������� ���� �˰���
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++)
		{
			if (((p+j)->cnt) < ((p+j+1)->cnt))
			{
				//�ӽú��� ����ü�� ��Ƽ�
				//ũ�Ⱑ ū�ź��� ���� ������ ������������
				tmp = p[j];
				p[j] = p[j+1];
				p[j+1] = tmp;
			}
		}
	}


	//���
	for(i=0;i<n;i++)
	{printf("%s\n", (p+i)->str);}

	free(p);//�޸�����
	free(q);

	p = NULL;//p�� q ���� �ʱ�ȭ
	q = NULL;

	return ;
}
