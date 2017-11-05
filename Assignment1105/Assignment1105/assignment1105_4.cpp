#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct st{
	char *str;
	int cnt;
};
void main()
{
	struct st tmp;	//임시 구조체변수
	struct st *p = NULL;//입력받을 구조체 포인터

	char *q = NULL;//문자열 포인터 정의
	int n=0;
	int i=0;
	int j=0;

	//정수입력
	scanf("%d", &n);

	//구조체 크기만큼 n개 동적할당
	p = (struct st* )malloc(n*sizeof(struct st));
	//입력받을 문자열 동적할당
	q = (char *)malloc(101*sizeof(char));

	//i는 n까지
	for(i=0;i<n;i++){
		//공백없는 문자열 입력
		scanf("%s", q);

		//입력받은 q값 p의 i번째 원소의 str값에 동적할당
		(p+i)->str = (char *)malloc((strlen(q)+1)*sizeof(char));
		//입력받은 q값 p의 i번째 원소의 str에 문자열 복사
		strcpy((p+i)->str,q);

		(p+i)->cnt = 0;//자음의 개수 0의로 초기화

		for(j=0;j<strlen((p+i)->str);j++)
		{	
			//모음이 아니라면
			if ((p+i)->str[j]!='A' && (p+i)->str[j]!='E' && (p+i)->str[j]!='I' 
				&& (p+i)->str[j]!='O' && (p+i)->str[j]!='U' 
				&& (p+i)->str[j]!='a' && (p+i)->str[j]!='e' && (p+i)->str[j]!='i'
				&& (p+i)->str[j]!='o'&& (p+i)->str[j]!='u')
			{
				(p+i)->cnt++;//문자가 자음인 경우 카운트 증가

			}
		}
	}

	//내림차순 정렬 알고리즘
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++)
		{
			if (((p+j)->cnt) < ((p+j+1)->cnt))
			{
				//임시변수 구조체에 담아서
				//크기가 큰거부터 작은 순으로 내림차순정렬
				tmp = p[j];
				p[j] = p[j+1];
				p[j+1] = tmp;
			}
		}
	}


	//출력
	for(i=0;i<n;i++)
	{printf("%s\n", (p+i)->str);}

	free(p);//메모리해제
	free(q);

	p = NULL;//p와 q 변수 초기화
	q = NULL;

	return ;
}
