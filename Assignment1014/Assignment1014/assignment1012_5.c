 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct complex
{
 float num;
 float inum;
}COM;
COM add(COM st1, COM st2);
void main()
{
 COM st1;
 COM st2;
 COM res;
 int i=0;
 scanf("%f %f",&st1.num,&st1.inum);
 scanf("%f %f",&st2.num,&st2.inum);
 res=add(st1,st2);
 printf("%.1f + %.1fi",res.num,res.inum);
}
COM add(COM st1, COM st2)
{
 COM temp;
 temp.num=st1.num+st2.num;
 temp.inum=st1.inum+st2.inum;
 return temp;  
}