#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 char str1[101];
 char str2[101];
 int i=0;
 int j=0;
 int strSize=0;
 int str2Size=0;
 int count=0;
 int res=0;
 gets(str1);
 gets(str2);
 
 strSize=strlen(str1);
 str2Size=strlen(str2);
 for(i=0;i<strSize;i++)
 {
  for(j=0;j<str2Size;j++)
  {
   if(str1[i+j]==str2[j])
   {
    count++;
   }
  }
  if(count==str2Size)
  {
   res++;
   i=i+str2Size-1;
   count=0;
  }
  count=0;
  
 }
 printf("%d",res);
}