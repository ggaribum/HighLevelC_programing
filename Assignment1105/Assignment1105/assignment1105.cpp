#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//배열이 아닌 포인터만으로 풀어볼것.
void main()
{
	int input, i;
	int *p=NULL;
	
	//배열 갯수(input)값 입력
	scanf("%d", &input);
	
	//p에 동적할당
	p = (int*)malloc(input*sizeof(int));

	for(i=0;i<input;i++)
	{
		scanf("%d", p+i);	//p배열에 입력
	}
	for(i=0;i<input;i++)
	{
		//처음 인덱스는 바로 다음 인덱스와 비교
		if (i==0 && p[i]>p[i+1]) printf("%d %d\n",i,p[i]);
		//input-1 인덱스는 바로 옆과 비교
		else if (i==input-1 && p[i-1]<p[i]) printf("%d %d\n", i, p[i]);	
		//중간 인덱스는 양옆과 비교
		else if (p[i-1]<p[i] && p[i]>p[i+1]) printf("%d %d\n", i, p[i]);
		
	}
	free(p);//메모리 반납
	return ;
}
