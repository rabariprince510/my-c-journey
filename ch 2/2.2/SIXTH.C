 #include<stdio.h>
 #include<conio.h>

 main()
 {
   int r;
   float PI=3.14;
   clrscr();
   printf("enter radius: ");
   scanf("%d",&r);

   printf("\n2 * %.2f * %d = %.2f",PI,r,2*PI*r);
   printf("\nperimeter of circle: %.2f",2*PI*r);
   getch();
 }

