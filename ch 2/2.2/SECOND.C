#include<stdio.h>
#include<conio.h>

main()
{
  int r;
  const float PI=3.14;

  clrscr();
  printf("enter value of radius: ",r);
  scanf("%d",&r);
  printf("%.2f*%d*%d = %.2f",PI,r,r,PI*r*r);

  printf("\narea of circle=%.2f",PI*r*r);
  getch();
 }

