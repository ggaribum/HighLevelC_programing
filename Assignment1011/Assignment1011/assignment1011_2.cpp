#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	
	int num=0;
	char str[10]={}; //����ϱ� ���� null������ �ʱ�ȭ �����ִ°� �ʿ��� NULL=='\0'
	int index=0;
	int i=0;

	scanf("%d",&num);
	while(num!=0)
	{
		str[index]=num%10+'0';
		//char ���� ������ �ٷ� �ְԵǸ� �ƽ�Ű�ڵ� ������ �ν��ؼ� ������ ���� ��
		//���� char <- int �ϰ������ char = int + '0' ; ������Ѵ�!!

		index++;
		num=num/10;
	}
	printf("%s",str);

}