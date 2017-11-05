#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void compareString(char *arr1, char *arr2){

	
	if(strcmp(arr1,arr2) == 0 )
	{
		//같다면
		printf("identical"); 
	} else 
		printf("different");
}
void main()
{
	//입력받을 문자열 선언
	char *pArr,*pArr2 = NULL;

	//각 문자열에 최대50크기만큼 동적할당
	pArr = (char *)malloc(51*sizeof(char));
	pArr2 = (char *)malloc(51*sizeof(char));

	//공백을 포함(인정)하는 문자열 입력
	gets(pArr);
	gets(pArr2);

	//compareString으로 인자값전달
	compareString(pArr, pArr2); 
	
	free(pArr); //메모리해제
	free(pArr2); //메모리해제
	
	return ;
}
