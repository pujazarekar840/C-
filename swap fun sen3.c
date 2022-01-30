#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
  int a,b;
  printf("\n Enter 1st number");
  scanf("%d",&a);
  printf("\n Enter 2nd number");
  scanf("%d",&b);
  printf("\n After swapping a is %d and b is %d",a,b);
  swap(&a,&b);
  printf("\n After swapping a is %d and b is %d",a,b);
  getch();
}
 void swap(int*x,int*y)
 {int temp;
  temp=*x;
  *x=*y;
  *y=temp;
 }