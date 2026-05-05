#include<stdio.h>

main()
{
    float first,second,third;
	
	printf("Enter first angle of the triangle: ");
	scanf("%f",&first);
	
	printf("Enter second angle of the triangle: ");
	scanf("%f",&second);
	
	third=180-first-second;
	
	printf("third angle of the triangle: %.2f",third);
}
