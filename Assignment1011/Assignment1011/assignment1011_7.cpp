#include<stdio.h>
#include<string.h>
#define STRLENGTH 102  

void main(){
	int N, i, l ;
	char str[STRLENGTH] , min[STRLENGTH];
	int minlen= STRLENGTH;
	scanf("%d", &N); //  ��Ʈ�� ����
	getchar(); // �� ���� <Enter>�о����

	if(N>=1){
		for(i=1;i<=N;++i){
			gets(str);
			l=strlen(str);
			if(l<minlen){
				minlen=l;
				strcpy(min, str); 
			}
		}
	}
	puts(min);
}
