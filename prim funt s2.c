#include<stdio.h>
#include<conio.h>
 void prim();
 void main()
 {
   int a;
   printf("\n Enter number: ");
   scanf("%d",&a);
   prim(a);
   getch();
 }
 void prim(int x)
 { 
   int i,m,flag=0;
   m=x/2;
   for(i=2;i<=m;i++)
   {
    if (x%i==0)
	{
	 printf("\n number is not prime");
	 flag=1;
	 break;
	}
   }
   if(flag==0)
	   printf("\n number is prime");
 }