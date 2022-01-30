#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
  int a,b,temp;
  printf("\n Enter 1st number: ");
  scanf("%d",&a);
  printf("\n Enter 2nd number: ");
  scanf("%d",&b);
  swap(a,b);
  getch();
}
 void swap(int x,int y)
 { int temp;
   printf("\n Before swapping a is %d and b is %d",x,y);
   temp=x;
   x=y;
   y=temp;
   printf("\n After swapping a is %d and b is %d",x,y);
 
 
 }




