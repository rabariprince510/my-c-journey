#include<stdio.h>
#include<conio.h>

main()
{
  int age;
  float marks;
  int a,b;
  clrscr();
  printf("enter your age: ");
  scanf("%d",&age);

  printf("enter your marks: ");
  scanf("%f",&marks);

  printf("\n");
  printf("my age is %d and my age is %.2f.",age,marks);

  printf("\n");
  printf("enter your first number: ");
  scanf("%d",&a);

  printf("enter your second number: ");
  scanf("%d",&b);

  printf("\n%d + %d= %d",a,b,a+b);
  getch();
 }




