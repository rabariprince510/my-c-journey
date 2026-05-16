#include<stdio.h>

main()
{
	int Marks;
	char Grade;
	
	
	
	printf("enter your marks out of 100 : ");
	scanf("%d",&Marks);
	
    Grade=	(Marks>=90) ?  'A' :
        	(Marks>=70)	?  'B' :
        	(Marks>=50) ?  'C' :
        	(Marks>=33)	?  'D' :  'F' ;
	
	
	printf("Your Grade is %c.\n",Grade);
	
	switch(Grade)
	{
		case 'A':
		case 'a':
			    printf("Excellent work\n");
			    break;
		case 'B':
		case 'b':
		        printf("Well done\n");
				break;
		case 'C':
		case 'c':
		        printf("Good job\n");
				break;
		case 'D':
		case 'd': 
		        printf("You passed, But you could do better\n");
				break;
		case 'F':
		case 'f':
		        printf("Sorry , You failed\n");
				break;								    
	}
	
	if( Grade>='A' && Grade<='D' )
	{
		printf("Congratulation! You are eligible for next level.\n");
	}
	else 
	{
		printf("Please try again next time.\n");
	}
}
