#include<stdio.h>
#include<conio.h>
void main()
{  int a,i,mul=1;
   printf("\n Enter number:");
   scanf("%d",&a);
    printf("\n multiplication table of %d:",a);
   for (i=1;i<=10;i++)
   { mul=a*i;
	printf("\n %d",mul);
   }
   
   getch();

}