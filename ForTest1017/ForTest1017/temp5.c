#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void gcdlcm(int i,int j,int *gcd,int *lcm)
{
	int dividor;
	int dividend;
	int res=-1;
	if(i>j){dividend=i; dividor=j;}
	else if(i<j){dividend=j; dividor=i;}
	else if(i==j){*gcd=i,*lcm=i; return;}
	
	while(dividend%dividor!=0)
	{
		res=dividend%dividor;
		dividend=dividor;
		dividor=res;
	}
	*gcd=dividor;
	*lcm=(i*j)/(*gcd);
}

void main()
{
	int num1=0,num2=0;
	int Mgcd,Mlcm,*g,*l;
	g=&Mgcd;
	l=&Mlcm;
	scanf("%d %d",&num1,&num2);

	gcdlcm(num1,num2,g,l);
	printf("%d %d",*g,*l);
}