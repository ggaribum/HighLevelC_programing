#include<stdio.h>
#include<string.h>
int main(){
	char s1[42]={},s2[21]={};
	int n,i;
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%d",&n);
	//strcat의 파라미터는 포인터(주소)값이므로, s1+n부터(시작주소)
	//s2에 s1을 붙인다
	strcat(s2,s1+n);
	for(i=0;s1[n+i]='\0';i++){
		s1[n+i]='\0';
	}
	strcat(s1,s2);
	printf("%s",s1);


	return 0;
}
