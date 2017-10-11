#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *eng(int num);
void main()
{
	int inputNum;
	int count=0;
	int res;
	int final;
	scanf("%d",&inputNum);
	res=inputNum;
	while(inputNum!=0)
	{
		inputNum=inputNum/10;
		count++;
	}
	while(count!=0)
	{
		if(count==4)
		{
			final=res/1000;
			res=res%1000;
			if(eng(final)!=""){
				printf("%s THO ",eng(final));
				count--;
			}
			else
			{
				count--;
			}
		}
		else if(count==3)
		{
			final=res/100;
			res=res%100;
			if(eng(final)!=""){
				printf("%s HUN ",eng(final));
				count--;
			}
			else
			{
				count--;
			}
		}
		else if(count==2)
		{
			final=res/10;
			res=res%10;
			if(eng(final)!=""){
				printf("%s TEN ",eng(final));
				count--;
			}
			else
			{
				count--;
			}
		}
		else if(count==1)
		{
			if(eng(res)!=""){
				printf("%s",eng(res));
				count--;
			}
			else
			{
				count--;
			}
		}

	}

}
char *eng(int num)
{
	char *eng="";
	switch(num)
	{
	case 0:
		eng="";
		break;
	case 1:
		eng="one";
		break;
	case 2:
		eng="two";
		break;
	case 3:
		eng="three";
		break;
	case 4:
		eng="four";
		break;
	case 5:
		eng="five";
		break;
	case 6:
		eng="six";
		break;
	case 7:
		eng="seven";
		break;
	case 8:
		eng="eight";
		break;
	case 9:
		eng="nine";
		break;
	}
	return eng;
}