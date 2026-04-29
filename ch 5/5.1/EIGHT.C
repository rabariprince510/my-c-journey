 #include<stdio.h>
 #include<conio.h>

 main()
 {
  int math,eng,sci;
  float avg;
  clrscr();
  printf("enter your maths marks: ");
  scanf("%d",&math);
  printf("enter your english marks: ");
  scanf("%d",&eng);
  printf("enter your science marks: ");
  scanf("%d",&sci);
  avg=(math+eng+sci)/3.0;
  printf("\nyour avg marks of three subject is %.2f.",avg);
  getch();
 }


