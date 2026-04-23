 #include<stdio.h>
 #include<conio.h>

 main()
 {
   int first,second,third,fourth,fifth;
   float avg;

   clrscr();
   printf("enter first number: ");
   scanf("%d",&first);
   printf("enter second number: ");
   scanf("%d",&second);
   printf("enter third number: ");
   scanf("%d",&third);
   printf("enter fourth number: ");
   scanf("%d",&fourth);
   printf("enter fifth number: ");
   scanf("%d",&fifth);
   avg = (first + second + third + fourth + fifth)/5.00;
   printf("average of five number is: %.2f",avg);
   getch();
 }
