#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct parking
{
	int carNum;	//����ȣ
	int stuID;	//�й�
	char startYear[11];	//������ ��¥
	char startDate[6];	//������ �ð�
	char endYear[11];	//������ ��¥
	char endDate[6];	//������ ��ȣ
	int flag;		//�ߺ��˻縦 ���� �÷��װ�
}PARKING;
//����ü����
int countMethod(int inhour,int inminute,int outhour,int outminute);
void main()
{
	int i=0,input=0,j=0,size=0 ,k=0; //for���� ����� ���� ����
	int input2=0;	//�� ��°�� �Է¹��� ��
	PARKING car[100],temp[100],tmp;	//PARKINGŸ���� ����ü ����
	int searchCar[100];	//ã�� ����ȣ
	int newInHour;	//���ڿ����� �ð������� ��ȯ��Ű�� ���� ���� ����
	int newInMinute;//���ڿ����� �ð������� ��ȯ��Ű�� ���� ���� ����
	int newOutHour;//���ڿ����� �ð������� ��ȯ��Ű�� ���� ���� ����
	int newOutMinute;//���ڿ����� �ð������� ��ȯ��Ű�� ���� ���� ����
	char tempTime[2];//���ڿ����� �ð������� ��ȯ��Ű�� ���� �ӽ� ����
	int charge=3000;	//������ 
	int countTime=0;	//���� �ð� �� ���� ����

	scanf("%d",&input);	//������ ������ ����� �Է�

	//�������� �Է�
	for(i=0;i<input;i++)
	{
		scanf("%d",&car[i].carNum);	//����ȣ
		scanf("%d",&car[i].stuID);	//�й�
		scanf("%s",car[i].startYear);	//������ ��¥
		scanf("%s",car[i].startDate);	//������ �ð�
		scanf("%s",car[i].endYear);		//������ ��¥
		scanf("%s",car[i].endDate);		//������ �ð�
		car[i].flag=0;		//�ߺ��˻縦 ���� �÷��� �� �ʱ�ȭ
	}

	//���Ⱑ ����4���� �ٽ�. ����3���� �ٸ��� �й��� ������ ������
	//������ temp[] �� ��´�.
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

	j=0;//�ʱ�ȭ
	//flag���� 1�̸� temp�� ����
	for(i=0;i<input;i++)
	{	
		//�÷��װ� 1�̶�� == ��ġ�� �й��� �ִٴ� �ǹ�(�����̿���)
		if(car[i].flag==1)
		{
			temp[j]=car[i];
			j++;
			size++;
		}
	}
	
	//���� �Է�
	scanf("%d",&input2);
	//ã�� �� ��ȣ �Է�
	for(i=0;i<input2;i++)
	{
		scanf("%d",&searchCar[i]);
	}
	//2���������� �߽߰� ���.
	for(i=0;i<input2;i++)
	{
		for(j=0;j<input;j++)
		{
			if(searchCar[i]==car[j].carNum)
			{
				//������ �ð��� ������ �Ľ��ؼ� ������ ����
				tempTime[0]=car[j].startDate[0];
				tempTime[1]=car[j].startDate[1];
				newInHour=atoi(tempTime); //���� �ð�
				tempTime[0]=car[j].startDate[3];
				tempTime[1]=car[j].startDate[4];
				newInMinute=atoi(tempTime);//���� ��
				tempTime[0]=car[j].endDate[0];
				tempTime[1]=car[j].endDate[1];
				newOutHour=atoi(tempTime);//���� �ð�
				tempTime[0]=car[j].endDate[3];
				tempTime[1]=car[j].endDate[4];
				newOutMinute=atoi(tempTime);//���� ��
				//���Խð� �� ����ؼ� �� ������ ����
				countTime=countMethod(newInHour,newInMinute,newOutHour,newOutMinute);
				
				//���Խð� ���̰� 60�� �̸��̸� 3000��
				if(countTime<=60)
				{
					charge=3000;
				}
				//60���� �ʰ��߰� �����ڸ� ���ڰ� �����Ѵٸ�(1���̶� ������ 10�� ����)
				else if(60<countTime && countTime%10!=0)
				{
					charge=3000+(((countTime/10)-5)*1000);
				}
				//60���� �ʰ��߰� �����ڸ� ���ڰ� �������� �ʴ´ٸ�(10�д����� ����)
				else if(60<countTime && countTime%10==0)
				{
					charge=3000+(((countTime/10)-6)*1000);
				}
				//���� ������ ������ ����� 30000���� ������ �ִ밪�� 30000���� ����
				if(charge>30000)
				{
					charge=30000;
				}
				//��������� size��ŭ for���� ���ؼ� �˻�
				//���� ��������� �� �ѹ��� ������ ������� 100000��
				for(k=0;k<size;k++)
				{
					if(temp[k].carNum==searchCar[i])
					{
						charge=100000;
					}
				}
				//�� ó�� if�� , ���ǿ� �ش� �ȴٸ� ������ ���.
				printf("%d\n",charge);
			}
		}
	}
		
}

//���Խð����̸� ����ϴ� �޼���
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