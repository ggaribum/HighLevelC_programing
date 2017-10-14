#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	//포인터 범벅으로 풀어보자
	char ch[10] , *pch , *pch2;
	char answer,*pAnswer ,*chEnd;
	int count=0 ,*pCount;
	int maxCount=0,*pMaxCount;
	//포인터는 다 연결 시킬것.
	pCount=&count;
	pMaxCount=&maxCount;
	pAnswer=&answer;

	//해당 배열의 마지막 주소를 대입
	chEnd=ch+10;
	
	//입력
	for(pch=ch;pch<chEnd;pch++)
	{
		scanf("%c",pch);
	}
	//중복되는 글자 검색
	//생각해볼 부분은 어차피 동일한 카운트 값이 나와도
	//maxCount<count 이면 업데이트 할 거니깐 상관없음.
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