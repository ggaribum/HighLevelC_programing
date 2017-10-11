#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	
	int num=0;
	char str[10]={}; //출력하기 위해 null값으로 초기화 시켜주는게 필요함 NULL=='\0'
	int index=0;
	int i=0;

	scanf("%d",&num);
	while(num!=0)
	{
		str[index]=num%10+'0';
		//char 형에 정수값 바로 넣게되면 아스키코드 값으로 인식해서 엉뚱한 값이 들어감
		//따라서 char <- int 하고싶으면 char = int + '0' ; 해줘야한다!!

		index++;
		num=num/10;
	}
	printf("%s",str);

}