#include<stdio.h>
#include<conio.h>

main()
{
 int b,h;

 clrscr();
 printf("enter base: ");
 scanf("%d",&b);

 printf("enter heigth: ");
 scanf("%d",&h);

 printf("\n0.5 * %d * %d = %.2f",b,h,0.5*b*h);
 getch();
}

