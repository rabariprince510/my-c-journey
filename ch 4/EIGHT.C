 #include<stdio.h>
 #include<conio.h>

 main()
 {
   float Base,HRA,TA,DA,Gross;
   clrscr();
   printf("enter base salary: ");
   scanf("%f",&Base);
   printf("enter HRA: ");
   scanf("%f",&HRA);
   printf("enter DA: ");
   scanf("%f",&DA);
   printf("enter TA: ");
   scanf("%f",&TA);
   HRA=Base*HRA/100;
   DA=Base*DA/100;
   TA=Base*TA/100;
   Gross=Base+HRA+DA+TA;
   printf("Gross salary: %.2f",Gross);
   getch();
 }







