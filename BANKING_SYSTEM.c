#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int list();
void desposite();
void withdraw();
void transfer();
void cheek();
void last();
int Total_Amount=500;
int Amount,Amo,Tr,Total_withdraw=0,Total_deposite=0,Total_tr=0;
int Acc;
char a[50];
void main()
{ 	printf("\nENTER YOUR NAME:");
	gets(a);
	printf("\nENTER YOUR ACCOUNT NUMBER:");
	scanf("%d",&Acc);
	while(1)
	{
		system("cls");
			switch(list())
		{
			case 1:
				desposite();
				Total_deposite+=Amount;
				break;
				
			case 2:
		   	 	withdraw();
		   	 	if(Amo<=Total_Amount)
		   	 	Total_withdraw+=Amo;
				break;
				
			case 3:
				transfer();
				if(Tr<=Total_Amount)
				Total_tr+=Amo;
				break;
				
			case 4:
				cheek();
				break;
				
			case 5:
				system("cls");
				last();
				getch();
				exit(0);
			default:
			printf("\n***INVALID CHOICE***");
		}
		getch();
	}
	
}

int list()
{    
	
	int ch;
	printf("\n1.DEPOSITE AMOUNT:");
	printf("\n2.WITHDRAW AMOUNT:");
	printf("\n3.TRANSFER AMOUNT:");
	printf("\n4.CHEEK DEATIL:");
	printf("\n5.EXIT:");
	printf("\nENTER YOUR CHOICE:");
	scanf("%d",&ch);
	return(ch);	
}

void desposite()
{
	printf("\nENTER THE AMOUNT YOU WANT TO DESPOSITE:");
	scanf("%d",&Amount);
	Total_Amount=Total_Amount+Amount;
}

void withdraw()
{
	printf("\nENTER THE AMOUNT YOU WANT WITHDRAW:");
	scanf("%d",&Amo);
	if(Amo<=Total_Amount)
	{
		Total_Amount-=Amo;
	}
	else
	{
		printf("\nLESS AMOUNT WITHDRAW IS NOT POSSIBLE");
	}
}

void transfer()
{
	printf("\nENTER THE AMOUNT YOU WNAT TO TRANSFER");
	scanf("%d",&Tr);
	if(Tr<=Total_Amount)
	{
		Total_Amount-=Amo;
	}
	else
	{
		printf("\nLESS AMOUNT TRANSFER IS NOT POSSIBEL");
	}
}

void cheek()
{
	printf("TOTAL AMOUNT:%d",Total_Amount);
	printf("\nTOTAL DEPOSITE AMOUNT:%d",Total_deposite);
	printf("\nTOTAL WITHDRAW AMOUNT:%d",Total_withdraw);
	printf("\nTOTAL TRANSFER AMOUNT:%d",Total_tr);
}

void last()
{	
	printf("\n****************************************************\n");
	printf("\nYOUR NAME:%s",a);
	printf("\nYOUR ACCOUNT NUMBER:%d",Acc);
	printf("\nTOTAL AMOUNT:%d",Total_Amount);
	printf("\nTOTAL DEPOSITE AMOUNT:%d",Total_deposite);
	printf("\nTOTAL WITHDRAW AMOUNT:%d",Total_withdraw);
	printf("\nTOTAL TRANSFER AMOUNT:%d",Total_tr);
	printf("\n \n*******************THANKS***************************");
	printf("\n \n \n**********PROJECT DONE BY AMITABH CHAURASIA UNDER GUIDANCE OF VASHISHTH MUNI SINGH SIR************* ");
}












