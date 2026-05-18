#include<stdio.h>

main()
{
	int num, firstdigit, lastdigit, sum;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	if (num < 0)
	{
		num = -num;
	}
	
	lastdigit = num % 10;
	firstdigit = num;
	
	while (firstdigit >= 10)
	{
		firstdigit = firstdigit / 10;
	}
	
	sum = firstdigit + lastdigit;
	printf("The sum of first and last digit : %d\n",sum);
}
