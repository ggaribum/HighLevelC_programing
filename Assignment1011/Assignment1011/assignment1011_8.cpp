#include<stdio.h>
#include<string.h>
int main(){
	char s1[42]={},s2[21]={};
	int n,i;
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%d",&n);
	//strcat�� �Ķ���ʹ� ������(�ּ�)���̹Ƿ�, s1+n����(�����ּ�)
	//s2�� s1�� ���δ�
	strcat(s2,s1+n);
	for(i=0;s1[n+i]='\0';i++){
		s1[n+i]='\0';
	}
	strcat(s1,s2);
	printf("%s",s1);


	return 0;
}
