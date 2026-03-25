 #include<stdio.h>
 #include<conio.h>

 main()
 {
   int n;
   float p,r;

   clrscr();
   printf("enter principle amount: ");
   scanf("%f",&p);

   printf("enter rate: ");
   scanf("%f",&r);

   printf("enter time in a month: ");
   scanf("%d",&n);

   printf("\n%.2f * %.2f * %d = %.2f",p,r,n,p*r*n/100);
   printf("\nsimple interest: %.2f",p*r*n/100);

   getch();
 }
