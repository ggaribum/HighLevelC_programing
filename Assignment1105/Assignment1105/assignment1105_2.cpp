#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	//�ʿ��� ���� ����
	int n = 0;
	int i = 0;
	int len = 0;
	//�Է¹��� �迭 ����
	char *pArr = NULL;

	//���ڱ��� �ִ� 50�� �迭 �����Ҵ�
	pArr = (char *)malloc(51*sizeof(char)); 
	scanf("%s", pArr); //������� ���ڿ� �Է�

	len = strlen(pArr);

	//i�� �ش� �迭�� �� ���� �������� Ž��
	for( i = len - 1; i >= 0; i--)
	{ 
		//�Է¹��� �迭�� �빮�� A~Z�̸鼭
		if(*(pArr + i) >= 'A' && *(pArr + i) <= 'Z') 
		{
			//�Է¹��� �迭�� A E I O U (����)�� �ƴ϶��
			if(*(pArr + i) != 'A' && *(pArr + i) != 'E' && *(pArr + i) != 'I' 
				&& *(pArr + i) != 'O' && *(pArr + i) != 'U')
			{
				//���
				printf("%c",*(pArr + i ));
			}
		}
	}
	free(pArr); //�޸� ���� 
	return ;
}