#include<stdio.h>

main()
{
	float base,HRA,DA,TA,GROSS;
	
	printf("Enter base salary: ");
	scanf("%f",&base);
	
	printf("Enter HRA: ");
	scanf("%f",&HRA);
	
	printf("Enter DA: ");
	scanf("%f",&DA);
	
	printf("Enter TA: ");
	scanf("%f",&TA);
	
	HRA = base*HRA / 100;
	DA = base*DA / 100;
	TA = base*TA /100;
	
	GROSS = base + HRA + DA + TA ;
	
	printf("Gross salary: %.2f",GROSS);
}
