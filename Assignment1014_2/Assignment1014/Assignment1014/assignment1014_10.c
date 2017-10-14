#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//////////////////////////////////////////////////////////////////////////////////

///////////////////최대공약수, 최소공배수 출력하는 함수 //////////////////////////

/////////////////////////////////////////////////////////////////////////////////

void gcdfunc(int *gcd,int *lim,int i, int j )
{
	int dividend;
	int divisor;
	int r;
	if(i>j){dividend=i;divisor=j;}	//i가 j보다 크다면 피제수=i 제수 =j
	if(j>i){dividend=j;divisor=i;}	//j가 i보다 크다면 피제수=j 제수 =i
	if(i==j){*gcd=i;*lim=i;}	//i==j면 최대,최소공배수는 그냥 i
	
	while(dividend%divisor!=0)	//피제수 % 제수 가 0일때 gcd값 나옴
	{
		r=dividend%divisor;
		dividend=divisor;
		divisor=r;
	}
	*gcd=divisor;	//while 빠져나왔을 때 제수가 최대공약수
	*lim=(i*j) / (*gcd);//최소공배수는 i*j 를 최대공약수로 나눈 값.
}
void main()
{
	int a=0,b=0;
	int answer1=0,answer2=0;
	scanf("%d %d",&a,&b);
	gcdfunc(&answer1,&answer2,a,b);

	printf("%d %d",answer1,answer2);
	

}