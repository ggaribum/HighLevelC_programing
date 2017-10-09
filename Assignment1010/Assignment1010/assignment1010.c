#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct parking
{
	int carNum;	//차번호
	int stuID;	//학번
	char startYear[11];	//들어오는 날짜
	char startDate[6];	//들어오는 시간
	char endYear[11];	//나가는 날짜
	char endDate[6];	//나가는 번호
	int flag;		//중복검사를 위한 플래그값
}PARKING;
//구조체정의
int countMethod(int inhour,int inminute,int outhour,int outminute);
void main()
{
	int i=0,input=0,j=0,size=0 ,k=0; //for문과 사이즈를 위한 변수
	int input2=0;	//두 번째로 입력받을 수
	PARKING car[100],temp[100],tmp;	//PARKING타입의 구조체 변수
	int searchCar[100];	//찾을 차번호
	int newInHour;	//문자열값을 시간값으로 변환시키기 위한 정수 변수
	int newInMinute;//문자열값을 시간값으로 변환시키기 위한 정수 변수
	int newOutHour;//문자열값을 시간값으로 변환시키기 위한 정수 변수
	int newOutMinute;//문자열값을 시간값으로 변환시키기 위한 정수 변수
	char tempTime[2];//문자열값을 시간값으로 변환시키기 위한 임시 변수
	int charge=3000;	//주차료 
	int countTime=0;	//출입 시간 차 계산용 변수

	scanf("%d",&input);	//주차될 차량의 댓수를 입력

	//차량정보 입력
	for(i=0;i<input;i++)
	{
		scanf("%d",&car[i].carNum);	//차번호
		scanf("%d",&car[i].stuID);	//학번
		scanf("%s",car[i].startYear);	//들어오는 날짜
		scanf("%s",car[i].startDate);	//들어오는 시간
		scanf("%s",car[i].endYear);		//나가는 날짜
		scanf("%s",car[i].endDate);		//나가는 시간
		car[i].flag=0;		//중복검사를 위한 플래그 값 초기화
	}

	//여기가 과제4번의 핵심. 과제3번과 다르게 학번이 같은게 있으면
	//모조리 temp[] 에 담는다.
	for(i=0;i<input;i++)
	{
		for(j=0;j<input;j++)
		{
			if(i!=j)
			{
			if(car[i].stuID==car[j].stuID && (car[i].carNum!=car[j].carNum))
			{
				car[i].flag=1;
			}
			}
		}
	}

	j=0;//초기화
	//flag값이 1이면 temp에 저장
	for(i=0;i<input;i++)
	{	
		//플래그가 1이라면 == 겹치는 학번이 있다는 의미(부정이용자)
		if(car[i].flag==1)
		{
			temp[j]=car[i];
			j++;
			size++;
		}
	}
	
	//숫자 입력
	scanf("%d",&input2);
	//찾을 차 번호 입력
	for(i=0;i<input2;i++)
	{
		scanf("%d",&searchCar[i]);
	}
	//2중포문으로 발견시 출력.
	for(i=0;i<input2;i++)
	{
		for(j=0;j<input;j++)
		{
			if(searchCar[i]==car[j].carNum)
			{
				//들어오는 시간값 정수로 파싱해서 변수에 저장
				tempTime[0]=car[j].startDate[0];
				tempTime[1]=car[j].startDate[1];
				newInHour=atoi(tempTime); //들어온 시간
				tempTime[0]=car[j].startDate[3];
				tempTime[1]=car[j].startDate[4];
				newInMinute=atoi(tempTime);//들어온 분
				tempTime[0]=car[j].endDate[0];
				tempTime[1]=car[j].endDate[1];
				newOutHour=atoi(tempTime);//나간 시간
				tempTime[0]=car[j].endDate[3];
				tempTime[1]=car[j].endDate[4];
				newOutMinute=atoi(tempTime);//나간 분
				//출입시간 차 계산해서 분 단위로 저장
				countTime=countMethod(newInHour,newInMinute,newOutHour,newOutMinute);
				
				//출입시간 차이가 60분 미만이면 3000원
				if(countTime<=60)
				{
					charge=3000;
				}
				//60분을 초과했고 일의자리 숫자가 존재한다면(1분이라도 지나면 10분 가격)
				else if(60<countTime && countTime%10!=0)
				{
					charge=3000+(((countTime/10)-5)*1000);
				}
				//60분을 초과했고 일의자리 숫자가 존재하지 않는다면(10분단위로 나눔)
				else if(60<countTime && countTime%10==0)
				{
					charge=3000+(((countTime/10)-6)*1000);
				}
				//만약 위에서 정산한 요금이 30000원을 넘으면 최대값이 30000으로 저장
				if(charge>30000)
				{
					charge=30000;
				}
				//부정사용자 size만큼 for문을 통해서 검사
				//만약 부정사용자 차 넘버랑 같으면 주차료는 100000원
				for(k=0;k<size;k++)
				{
					if(temp[k].carNum==searchCar[i])
					{
						charge=100000;
					}
				}
				//맨 처음 if문 , 조건에 해당 된다면 주차료 출력.
				printf("%d\n",charge);
			}
		}
	}
		
}

//출입시간차이를 계산하는 메서드
int countMethod(int inhour,int inminute,int outhour,int outminute)
{
	int time=0;
	int time2=0;
	time=(outhour-inhour)*60;
	time2=(outminute-inminute);
	if(time2<0)
	{
		time=time-60;
		time2=(time2+60);
	}
	time=time+time2;
	return time;
}