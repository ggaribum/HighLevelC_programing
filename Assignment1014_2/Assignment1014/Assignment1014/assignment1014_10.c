#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//////////////////////////////////////////////////////////////////////////////////

///////////////////�ִ�����, �ּҰ���� ����ϴ� �Լ� //////////////////////////

/////////////////////////////////////////////////////////////////////////////////

void gcdfunc(int *gcd,int *lim,int i, int j )
{
	int dividend;
	int divisor;
	int r;
	if(i>j){dividend=i;divisor=j;}	//i�� j���� ũ�ٸ� ������=i ���� =j
	if(j>i){dividend=j;divisor=i;}	//j�� i���� ũ�ٸ� ������=j ���� =i
	if(i==j){*gcd=i;*lim=i;}	//i==j�� �ִ�,�ּҰ������ �׳� i
	
	while(dividend%divisor!=0)	//������ % ���� �� 0�϶� gcd�� ����
	{
		r=dividend%divisor;
		dividend=divisor;
		divisor=r;
	}
	*gcd=divisor;	//while ���������� �� ������ �ִ�����
	*lim=(i*j) / (*gcd);//�ּҰ������ i*j �� �ִ������� ���� ��.
}
void main()
{
	int a=0,b=0;
	int answer1=0,answer2=0;
	scanf("%d %d",&a,&b);
	gcdfunc(&answer1,&answer2,a,b);

	printf("%d %d",answer1,answer2);
	

}