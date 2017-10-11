#include<stdio.h>
#include<string.h>
#define STRLENGTH 102  

void main(){
	int N, i, l ;
	char str[STRLENGTH] , min[STRLENGTH];
	int minlen= STRLENGTH;
	scanf("%d", &N); //  스트링 개수
	getchar(); // 맨 끝의 <Enter>읽어들임

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
