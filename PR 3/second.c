#include<stdio.h>

main()
{
	int num;
	int count = 0;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	if(num == 0)
	{
		count = 1;
	}
	else
	{
		while (num != 0)
		{
			num = num /10;
	    	count++;
		}
	}
	
	printf("Total number of digits: %d",count);
}
