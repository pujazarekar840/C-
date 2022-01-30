#include<stdio.h>
#include<conio.h>
    
 void main()
 {
   int i,j;
   for(i=1;i<=5;i++)
   {
     for(j=1;j<=i;j++)
	 {
	   if((j==i)||(j==1))

		   printf("1");
	   else
		   printf("2");
      }
	 printf("\n");
   }
   getch();
 }
 