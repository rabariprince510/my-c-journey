 #include<stdio.h>
 #include<conio.h>

 main()
 {
  int num;
  clrscr();
  printf("enter your number: ");
  scanf("%d",&num);

  if(num>=0)
  {
   printf("your number is positive.");
  }
  else
  {
   printf("your number is negative.");
  }
  getch();
 }

