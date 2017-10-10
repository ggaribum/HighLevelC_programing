#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	int stuId;
	char name[10];
	int age;
}STU;
void swap(STU *s, STU *s2);
void main()
{
	STU input1;
	STU input2;
	//scanf 쓸 때 안에 콤마 쓰지 말것!!!
	scanf("%d %s %d %d %s %d",&input1.stuId,input1.name,&input1.age,&input2.stuId,input2.name,&input2.age);
	swap(&input1,&input2);
	
	printf("%d %s %d\n",input1.stuId,input1.name,input1.age);
	printf("%d %s %d",input2.stuId,input2.name,input2.age);
}
void swap(STU *s, STU *s2)
{
	int tempInt;
	char temp[10];
	strcpy(temp,s->name);
	tempInt=s->age;

	strcpy(s->name,s2->name);
	strcpy(s2->name,temp);
	s->age=s2->age;
	s2->age=tempInt;
	/*STU temp;
	strcpy(temp.name,s->name);
	temp.age=s->age;

	strcpy(s->name,s2->name);
	strcpy(s2->name,temp.name);
	s->age=s2->age;
	s2->age=temp.age;
	*/
}