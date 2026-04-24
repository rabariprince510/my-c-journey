 #include<stdio.h>
 #include<conio.h>

 main()
 {
  int marks;
  clrscr();
  printf("enter your marks out of 100: ");
  scanf("%d",&marks);

  if(marks>=33)
  {
   printf("you PASS the exam.");
  }
  else
  {
   printf("you FAIL the exam.");
  }
  getch();
 }
