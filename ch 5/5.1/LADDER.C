 #include<stdio.h>
 #include<conio.h>

 main()
 {
  int marks;
  clrscr();
  printf("enter your marks: ");
  scanf("%d",&marks);
  if (marks>=91 && marks<=100)
  {
   printf("you get A grade.");
  }
  else if (marks>=81 && marks<=90)
  {
   printf("you get A2 grade.");
  }
  else if (marks>=71 && marks<=80)
  {
   printf("you get B grade.");
  }
  else if (marks>=61 && marks<=70)
  {
   printf("you get B2 grade.");
  }
  else if (marks>=51 && marks<=60)
  {
   printf("you get C grade.");
  }
  else if (marks>=41 && marks<=50)
  {
   printf("you get D grade.");
  }
  else if (marks>=33 && marks<=40)
  {
   printf("you get E grade.");
  }
  else if (marks>=0 && marks<=33)
  {
   printf("you FAIL the exam.");
  }
  else
  {
   printf("this marks are invalid.");
   printf("\nGive marks out of 100.");
  }
  getch();
 }

