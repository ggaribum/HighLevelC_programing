 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int findeven(int arr[],int size);
void main()
{
 int num[100];
 int input=0;
 int  i=0;
 scanf("%d",&input);
 for(i=0;i<input;i++)
 {
  scanf("%d",num+i);
 }
 printf("%d",findeven(num,input));
}
int findeven(int arr[],int size)
{
 int j=0;
 int res=0;
 for(j=0;j<size;j++)
 {
  if(*(arr+j)%2==0)
  {
   res++;
  }
 }
 return res;
}