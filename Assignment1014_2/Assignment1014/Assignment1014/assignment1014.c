#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int *px,*py,*pz,*temp;
	int x=0,y=0,z=0;
	px=&x;
	py=&y;
	pz=&z;

	scanf("%d %d %d",px,py,pz);
	temp=px;
	px=pz;
	pz=py;
	py=temp;
	printf("%d %d %d",*px,*py,*pz);
}