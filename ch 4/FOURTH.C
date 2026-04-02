 #include<stdio.h>
 #include<conio.h>

 main()
 {
   int x,y;
   int ans;

   clrscr();
   printf("enter x: ");
   scanf("%d",&x);
   printf("enter y: ");
   scanf("%d",&y);

   ans=(x*x*x)+3*x*x*y+3*x*y*y+(y*y*y);

   printf("(%d+%d)^3=%d",x,y,ans);
   getch();
 }
