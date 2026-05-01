 #include<stdio.h>
 #include<conio.h>

 main()
 {
  int a,b,c,d;
  clrscr();
  printf("enter value of a: ");
  scanf("%d",&a);
  printf("enter value of b: ");
  scanf("%d",&b);
  printf("enter value of c: ");
  scanf("%d",&c);
  printf("enter value of d: ");
  scanf("%d",&d);
  if (a>b || c>d)
  {
   printf("a and c is greater than b and d.");
  }
  else
  {
   printf("b and d is greater than a and c.");
  }
  getch();
 }
