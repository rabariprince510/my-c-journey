 #include<stdio.h>
 #include<conio.h>

 main()
 {
  int first,second;
  clrscr();
  printf("enter your first number: ");
  scanf("%d",&first);
  printf("enter your second number: ");
  scanf("%d",&second);
  if (first>second)
  {
   printf("%d is minimum number.",second);
  }
  else
  {
   printf("%d is minimum number.",first);
  }
  getch();
 }
