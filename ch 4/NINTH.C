 #include<stdio.h>
 #include<conio.h>

 main()
 {
   int c;
   float f;
   clrscr();

   printf("enter temperature of celsius: ");
   scanf("%d",&c);

   f=(9.0/5.0*c)+32;
   printf("temperature in fahrenheit: %.2f",f);
   getch();
 }

