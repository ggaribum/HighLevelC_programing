#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void compareString(char *arr1, char *arr2){

	
	if(strcmp(arr1,arr2) == 0 )
	{
		//���ٸ�
		printf("identical"); 
	} else 
		printf("different");
}
void main()
{
	//�Է¹��� ���ڿ� ����
	char *pArr,*pArr2 = NULL;

	//�� ���ڿ��� �ִ�50ũ�⸸ŭ �����Ҵ�
	pArr = (char *)malloc(51*sizeof(char));
	pArr2 = (char *)malloc(51*sizeof(char));

	//������ ����(����)�ϴ� ���ڿ� �Է�
	gets(pArr);
	gets(pArr2);

	//compareString���� ���ڰ�����
	compareString(pArr, pArr2); 
	
	free(pArr); //�޸�����
	free(pArr2); //�޸�����
	
	return ;
}
