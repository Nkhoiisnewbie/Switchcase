//235057391
#include<stdio.h>
int main()
//Bai 1-----------------------------------------
{
	int n;
	printf("Nhap n");
	printf("\nn=");
	scanf("%d",&n);
	switch (n)
	{
		case 0:
			printf("So khong");
			break;
		case 1:
			printf("So mot");
			break;
		case 2:
			printf("So hai"); break;
		case 3:
			printf("So ba"); break;
		case 4:
			printf("So bon"); break;
		case 5:
			printf("So nam"); break;
		case 6:
			printf("So sau"); break;
		case 7:
			printf("So bay"); break;
		case 8:
			printf("So tam"); break;
		case 9:
			printf("So chin"); break;
		default:
			printf("Khong co du lieu !");
	}

//Bai 2---------------------------------------------------
	int n;
	printf("Nhap so nguyen co 2 chu so: ");
	scanf("%d",&n);
	if(n<10||n>100)
	{
		printf("%d khong phai so nguyen co 2 chu so !");
	}
	else
	{
		switch (n/10)//doc so hang chuc
		{
			case 1: printf("Muoi "); break;
			case 2: printf("Hai muoi "); break;
			case 3: printf("Ba muoi "); break;
			case 4: printf("Bon muoi "); break;
			case 5: printf("Nam muoi "); break;
			case 6: printf("Sau muoi "); break;
			case 7: printf("Bay muoi "); break;
			case 8: printf("Tam muoi "); break;
			case 9: printf("Chin muoi "); break;
		}
		switch (n%10)//donvi
		{
			case 0: printf(" "); break;
			case 1: printf("mot "); break;
			case 2: printf("hai  "); break;
			case 3: printf("ba "); break;
			case 4: printf("bon "); break;
			case 5: printf("nam "); break;
			case 6: printf("sau "); break;
			case 7: printf("bay "); break;
			case 8: printf("tam "); break;
			case 9: printf("chin "); break;
		}
	}

//Bai 3------------------------------------------------------
unsigned n,t,y;
	printf("Nhap so thang");
	printf("\nThang: ");
	scanf("%u",&t);
	if(t<0||t>12)
		printf("Thang khong ton tai !");
	else 
	{
		switch (t==1||t==3||t==5||t==7||t==8||t==10||t==12)
		{
			case 1: printf("Thang nay co 31 ngay !"); break; 
		}
		switch (t)
		{
			case 4: printf("Thang nay co 30 ngay !"); break;
			case 6: printf("Thang nay co 30 ngay !"); break;
			case 9: printf("Thang nay co 30 ngay !"); break;
			case 11: printf("Thang nay co 30 ngay !"); break;
			case 2:
                    printf("Vui long nhap so nam: ");
                    scanf("%u",&y);
					if (y%400==0||(y%4==0&&y%100!= 0))// nam nhuan
                    	printf("Nam nhuan nen thang 2 co 29 ngay !");
                    else
                        printf("Khong phai nam nhuan nen thang 2 co 28 ngay !");
                    break;
		}	
	}
	
//Bai 4----------------------------------------------------	
int a,b;       
	float thuong;       
	char dau;   
	printf("Nhap vao 2 so nguyen: ");  
	printf("\na=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);
	fflush(stdin);
	printf("\nNhap vao dau: ");   	
	scanf("%c",&dau);  
	switch(dau)  
	{  
		case '+':  
			printf("\n %d + %d = %d",a,b,a+b);  
			break;   	 	
		case '-':  
			printf("\n %d - %d = %d",a,b,a-b);  
			break;   	 	
		case '*':  
			printf("\n %d * %d = %d",a,b,a*b);  
			break;  
		case '/':  
			if (b!=0)
			{ 
				thuong=float(a)/float(b);  
				printf("\n %d / %d = %.2f",a,b,thuong);  
			}  
			else printf("Khong chia duoc cho 0");              
			break;  
		default :  
			printf("\n Chi ho tro cong,tru,nhan,chia %c", dau);  
			break;  
		}  
	return 1;
}

