 #include<stdio.h>
 #include<conio.h>

 main()
 {
   int num,lastdigit;
   clrscr();
   printf("enter three digit number: ");
   scanf("%d",&num);
   lastdigit = num % 10 ;
   printf("last digit number is: %d",lastdigit);
   getch();
 }
