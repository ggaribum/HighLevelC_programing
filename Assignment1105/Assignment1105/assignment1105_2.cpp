#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	//필요한 변수 선언
	int n = 0;
	int i = 0;
	int len = 0;
	//입력받을 배열 선언
	char *pArr = NULL;

	//문자길이 최대 50인 배열 동적할당
	pArr = (char *)malloc(51*sizeof(char)); 
	scanf("%s", pArr); //공백없는 문자열 입력

	len = strlen(pArr);

	//i는 해당 배열의 끝 부터 역순으로 탐색
	for( i = len - 1; i >= 0; i--)
	{ 
		//입력받은 배열이 대문자 A~Z이면서
		if(*(pArr + i) >= 'A' && *(pArr + i) <= 'Z') 
		{
			//입력받은 배열이 A E I O U (모음)이 아니라면
			if(*(pArr + i) != 'A' && *(pArr + i) != 'E' && *(pArr + i) != 'I' 
				&& *(pArr + i) != 'O' && *(pArr + i) != 'U')
			{
				//출력
				printf("%c",*(pArr + i ));
			}
		}
	}
	free(pArr); //메모리 해제 
	return ;
}