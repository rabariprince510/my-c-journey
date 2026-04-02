 #include<stdio.h>
 #include<conio.h>

 main()
 {
   int a=10;
   int b=20;

   clrscr();
   a=a+b;//a=30
   b=a-b;//b=10
   a=a-b;//a=20

   printf("a=%d\n",a);
   printf("b=%d\n",b);

   getch();
 }


