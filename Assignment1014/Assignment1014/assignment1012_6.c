 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct studentInfo
{
 int sex;
 int weight;
 int height;
}INFO;
void boy(INFO man,int *rank);
void girl(INFO woman,int *rank);
void main()
{
 INFO student[10];
 int input=0;
 int rank[3]={};
 int i=0;
 scanf("%d",&input);
 for(i=0;i<input;i++)
 {
  scanf("%d %d %d",&student[i].sex,&student[i].weight,&student[i].height);
 }
 for(i=0;i<input;i++)
 {
  if(student[i].sex==1)
  {
   boy(student[i],rank);
  }
  else
  {
   girl(student[i],rank);
  }
 }
 printf("%d %d %d",rank[0],rank[1],rank[2]);
}
void boy(INFO man,int *rank)
{
 int weight=man.weight;
 int height=man.height;
 
 if(weight<60 )
 {
  if(height<165)
  {*(rank)=*(rank)+1;}
  else if(165<=height&&height<175)
  {*(rank+1)=*(rank+1)+1;}
  else
  {*(rank+2)=*(rank+2)+1;}
 }
 if(60<=weight&&weight<=70)
 {
  if(height<165)
  {*(rank+2)=*(rank+2)+1;}
  else if(165<=height&&height<175)
  {*(rank)=*(rank)+1;}
  else
  {*(rank+1)=*(rank+1)+1;}
 }
 if(70<=weight)
 {
  if(height<165)
  {*(rank+1)=*(rank+1)+1;}
  else if(165<=height&&height<175)
  {*(rank+2)=*(rank+2)+1;}
  else
  {*(rank)=*(rank)+1;}
 }
}
void girl(INFO woman,int *rank)
{
 int weight=woman.weight;
 int height=woman.height;
 
 if(weight<50 )
 {
  if(height<165)
  {*(rank)=*(rank)+1;}
  else if(165<=height&&height<175)
  {*(rank+1)=*(rank+1)+1;}
  else
  {*(rank+2)=*(rank+2)+1;}
 }
 if(50<=weight&&weight<=60)
 {
  if(height<165)
  {*(rank+2)=*(rank+2)+1;}
  else if(165<=height&&height<175)
  {*(rank)=*(rank)+1;}
  else
  {*(rank+1)=*(rank+1)+1;}
 }
 if(60<=weight)
 {
  if(height<165)
  {*(rank+1)=*(rank+1)+1;}
  else if(165<=height&&height<175)
  {*(rank+2)=*(rank+2)+1;}
  else
  {*(rank)=*(rank)+1;}
 }
}
 