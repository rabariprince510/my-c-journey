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

   ans=(x*x)-2*x*y+(y*y);
   printf("(%d-%d)^2=%d",x,y,ans);
   getch();
 }


