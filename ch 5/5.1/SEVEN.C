 #include<stdio.h>
 #include<conio.h>

 main()
 {
  int num;
  clrscr();
  printf("enter any number: ");
  scanf("%d",&num);
  if (num>=1)
  {
   printf("%d is positive number.",num);
  }
  else if (num<=-1)
  {
   printf("%d is negative number.",num);
  }
  else
  {
   printf("%d is neutral number.",num);
  }
  getch();
 }
