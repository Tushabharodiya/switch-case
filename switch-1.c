#include<stdio.h>
main()
{
	int month;
	
	printf("1 month\n");
	printf("2 month\n");
	printf("3 month\n");
	printf("4 month\n");
	printf("5 month\n");
	printf("6 month\n");
	printf("7 month\n");
	printf("8 month\n");
	printf("9 month\n");
	printf("10 month\n");
	printf("11 month\n");
	printf("12 month\n");
	
	printf("enter the number=");
	scanf("%d",&month);
	
	switch(month){
		case 1:
		printf("January");
		break;
		case 2:
		printf("February");
		break;
		case 3:
		printf("March");
		break;
		case 4:
		printf("April");
		break;
		case 5:
		printf("May");
		break;
		case 6:
		printf("June");
		break;
		case 7:
		printf("July");
		break;
		case 8:
		printf("August");
		break;
		case 9:
		printf("September");
		break;
		case 10:
		printf("October");
		break;
		case 11:
		printf("November");
		break;
		case 12:
		printf("December");
		break;
		
		default:
		printf("pealse enter the right month");
	}
}