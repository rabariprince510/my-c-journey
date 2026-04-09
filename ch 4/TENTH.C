 #include<stdio.h>
 #include<conio.h>

 main()
 {
   int first,second,third;
   clrscr();
   printf("enter first angle of triangle: ");
   scanf("%d",&first);
   printf("enter second angle of triangle: ");
   scanf("%d",&second);
   third=180-first-second;
   printf("third angle of triangle: %d",third);
   getch();
 }



