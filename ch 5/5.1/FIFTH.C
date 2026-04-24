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

  if(first>second)
  {
   printf("your first number is GREATER.");
  }
  else
  {
   printf("your second number is GREATER.");
  }
  getch();
 }
