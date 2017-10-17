#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct complex
{
	float real;
	float fake;
}COM;
COM add(COM a,COM b)
{
	COM res;
	res.real=a.real+b.real;
	res.fake=a.fake+b.fake;
	return res;
}
void main()
{
	COM test1;
	COM test2;
	COM test3;
	scanf("%f %f",&test1.real,&test1.fake);
	scanf("%f %f",&test2.real,&test2.fake);
	test3=add(test1,test2);
	printf("%.1f + %.1fi",test3.real,test3.fake);
}