#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct city
{
	char cityname[21];
	float maxTem;
	float minTem;
	float gap;
};
//typedef가 아니라면 구조체 정의할 때 마지막에 세미콜론 꼭!


int input_city(struct city city[]);
struct city find_largest(struct city city[],int SIZE);
void main()
{
	int size;
	struct city city[10];
	struct city rescity;
	size=input_city(city);
	rescity=find_largest(city,size);
	//소수 첫째자리 까지 출력 %.1f 
	printf("%s %.1f",rescity.cityname,rescity.gap);

}
int input_city(struct city city[])
{
	int N=0;
	int i=0;
	scanf("%d",&N);
	if(1<=N&&N<=10){
		for(i=0;i<N;i++)
		{
			scanf("%s %f %f",city[i].cityname,&city[i].maxTem,&city[i].minTem);
		}
	}
	return N;
}
struct city find_largest(struct city city[],int SIZE)
{
	int i=0;
	float maxgap=0;
	int res;
	for(i=0;i<SIZE;i++)
	{
		city[i].gap=city[i].maxTem-city[i].minTem;		
	}
	for(i=0;i<SIZE;i++)
	{
		if(maxgap<city[i].gap)
		{
			maxgap=city[i].gap;
			res=i;
		}
	}
	return city[res];
}
