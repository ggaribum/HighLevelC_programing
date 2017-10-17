#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct BMI
{
	char name[10];
	int height;
	int weight;
	double bmi;
	char * BMI;
}BMI;

void sort_struct(BMI * s)//키로 오름차순 정렬
{
	BMI *temp;
	BMI *temp2;
	BMI switchTemp;
	for(temp=s;temp<s+5;temp++)
	{
		for(temp2=s;temp2<s+5;temp2++)
		{
			if(temp->height>temp2->height)
			{
				switchTemp=*temp;
				*temp=*temp2;
				*temp2=switchTemp;
			}
		}
	}
}
void cal_BMI(BMI * temp)//키와 몸무게 통해 BMI계산
{
	int j=0;
	for(j=0;j<5;j++)
	{
		//bmi=몸무게*10^4 / 키^2
		(temp+j)->bmi=(((double)(((temp+j)->weight)*10*10*10*10))/((double)((((temp+j)->tall)*((temp+j)->tall)))));
		if(temp+j->bmi<18.5){(temp+j)->BMI="Underweight";}
		else if(18.5<=(temp+j)->bmi && (temp+j)->bmi <=22.9){(temp+j)->BMI="Normal";}
		else if(23.0<=(temp+j)->bmi && (temp+j)->bmi <=24.9){(temp+j)->BMI="Overweight";}
		else{(temp+j)->BMI="Obesity";}
	}
}
void main()
{
	BMI student[5];
	int i=0;
	for(i=0;i<5;i++)
	{
		scanf("%s",student[i].name);
		scanf("%d",student[i].height);
		scanf("%d",student[i].weight);
	}
}
